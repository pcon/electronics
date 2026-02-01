#include <Ticker.h>
#include <PxMatrix.h>
#include "images.h"

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <PubSubClient.h>
#include <MqttLogger.h>

WiFiClient espClient;
PubSubClient client(espClient);
MqttLogger mqttLogger(client,"ledsign/log");

const char* ssid = "Rockhopper";
const char* password = "P3nguin!";
const char *mqtt_server =  "192.168.0.10";

Ticker display_ticker;

#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 32

int TOTAL_PIXELS = DISPLAY_WIDTH * DISPLAY_HEIGHT;

// Pins for LED MATRIX
#define P_LAT 16
#define P_A 5
#define P_B 4
#define P_C 15
#define P_OE 2
#define P_D 12
#define P_E 0

PxMATRIX display(DISPLAY_WIDTH, DISPLAY_HEIGHT, P_LAT, P_OE, P_A, P_B, P_C, P_D, P_E);

void display_updater() {
  display.display(70);
}

void wifiConnect() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    displayWifiError(display);
    delay(5000);
    ESP.restart();
  }

  mqttLogger.print("WiFi connected: ");
  mqttLogger.println(WiFi.localIP());
}

void reconnect() {
  while (!client.connected()) {
    mqttLogger.print("Attempting MQTT connection...");

    if (client.connect("ESP32Logger", "sign", "GRGTzQ4h7sUif3MxbeSJ")) {
      mqttLogger.println("connected.");
      client.subscribe("ledsign/image");
      client.subscribe("ledsign/brightness");
    } else {
      mqttLogger.print("failed, rc=");
      mqttLogger.print(client.state());
      mqttLogger.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }

  displayPokemon(display);
}

void ota() {
  ArduinoOTA.onStart([]() {
    mqttLogger.println("OTA Start");
    displayUploading(display);
  });
  ArduinoOTA.onEnd([]() {
    mqttLogger.println("OTA End");
  });
  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    mqttLogger.print(progress / (total / 100));
  });
  ArduinoOTA.onError([](ota_error_t error) {
    mqttLogger.println("OTA Error");
    if (error == OTA_AUTH_ERROR) mqttLogger.println("Auth Failed");
    else if (error == OTA_BEGIN_ERROR) mqttLogger.println("Begin Failed");
    else if (error == OTA_CONNECT_ERROR) mqttLogger.println("Connect Failed");
    else if (error == OTA_RECEIVE_ERROR) mqttLogger.println("Receive Failed");
    else if (error == OTA_END_ERROR) mqttLogger.println("End Failed");
  });
  ArduinoOTA.begin();
}

void callback(char* topic, byte* message, unsigned int length) {
  String messageTemp;

  for (int i = 0; i < length; i++) {
    messageTemp += (char)message[i];
  }

  if (String(topic) == "ledsign/image") {
    if (messageTemp == "blank") display.clearDisplay();
    else if (messageTemp == "pokemon") displayPokemon(display);
    else if (messageTemp == "mario") drawImage(0,0, getMario());
    else if (messageTemp == "quiet") displayQuiet(display);
    else if (messageTemp == "finalfantasy") displayFinalFantasy(display);
    else if (messageTemp == "test") displayTest(display);
  } else if (String(topic) == "ledsign/brightness") {
    display.setBrightness(messageTemp.toInt());
  }
}

void setup() {
  Serial.begin (9600);
  display.begin(16);
  display.clearDisplay();
  unsigned long start_timer = micros();
  display.drawPixel(1, 1, 0);
  unsigned long delta_timer = micros() - start_timer;
  start_timer = micros();
  display.display(0);
  delta_timer = micros() - start_timer;
  display_ticker.attach(0.002, display_updater);
  yield();
  display.clearDisplay();
  display.setBrightness(25);
  Serial.println("Test");
  displayWifiConnecting(display);
  //drawImage(0, 0, getMario());

  wifiConnect();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  ota();

  delay(500);
}

void drawImage(int x, int y, uint16_t img[]) {
  int counter = 0;
  for (int yy = 0; yy < DISPLAY_HEIGHT; yy++) {
    for (int xx = 0; xx < DISPLAY_WIDTH; xx++) {
      display.drawPixel(xx + x , yy + y, img[counter]);
      counter++;
    }
  }
}


void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  ArduinoOTA.handle();
}
