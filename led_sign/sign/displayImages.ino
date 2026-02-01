class Pixel {
  public:
    Pixel(int x, int y, uint16_t value, int count=1) {
      _x = x;
      _y = y;
      _value = value;
      _count = count;
    }

    void render(PxMATRIX display) {
      for (int x = _x; x < _x + _count; x += 1) {
        display.drawPixel(x - 1, _y - 1, _value);
      }
    }
  private:
    int _x;
    int _y;
    uint16_t _value;
    int _count;
};

uint16_t static myWHITE = display.color565(255, 255, 255);
uint16_t static myRED = display.color565(213, 0, 0);
uint16_t static myPINK = display.color565(255, 150, 236);

uint16_t static myLIGHTORANGE = display.color565(255, 195, 14);
uint16_t static myORANGE = display.color565(255, 111, 0);

uint16_t static myLIGHTGRAY = display.color565(158, 158, 158);
uint16_t static myDARKGRAY = display.color565(30, 30, 30);

uint16_t static myBRIGHTGREEN = display.color565(116, 255, 3);

uint16_t static myTEAL = display.color565(105, 240, 175);
uint16_t static myDARKTEAL = display.color565(0, 187, 212);

uint16_t static myLIGHTYELLOW = display.color565(245, 229, 156);
uint16_t static myYELLOW = display.color565(255, 234, 0);

uint16_t static myBLUE = display.color565(77, 110, 243);
uint16_t static myLIGHTBLUE = display.color565(66, 165, 245);
uint16_t static myROYALBLUE = display.color565(47, 54, 153);
uint16_t static myDARKBLUE = display.color565(2, 136, 209);

uint16_t static myBROWN = display.color565(93, 64, 55);
uint16_t static myLIGHTBROWN = display.color565(229, 170, 122);
uint16_t static myDARKBROWN = display.color565(78, 52, 46);

uint16_t static myLIGHTPURPLE = display.color565(169, 104, 212);

uint16_t static myDARKPINK = display.color565(252, 81, 110);

Pixel static wifiConnecting[] = {
  Pixel(29, 9, myORANGE, 8), Pixel(27, 10, myORANGE, 12), Pixel(25, 11, myORANGE, 4), Pixel(37, 11, myORANGE, 4), Pixel(25, 12, myORANGE, 2), Pixel(39, 12, myORANGE, 2), Pixel(30, 13, myORANGE, 6), Pixel(28, 14, myORANGE, 10), Pixel(26, 15, myORANGE, 4), Pixel(36, 15, myORANGE, 4), Pixel(26, 16, myORANGE, 2), Pixel(38, 16, myORANGE, 2), Pixel(31, 17, myORANGE, 4), Pixel(29, 18, myORANGE, 8), Pixel(29, 19, myORANGE, 2), Pixel(35, 19, myORANGE, 2), Pixel(32, 21, myORANGE, 2), Pixel(31, 22, myORANGE, 4), Pixel(31, 23, myORANGE, 4), Pixel(32, 24, myORANGE, 2)
};

Pixel static wifiError[] = {
  Pixel(29, 9, myRED, 8), Pixel(27, 10, myRED, 12), Pixel(25, 11, myRED, 4), Pixel(37, 11, myRED, 4), Pixel(25, 12, myRED, 2), Pixel(39, 12, myRED, 2), Pixel(30, 13, myRED, 6), Pixel(28, 14, myRED, 10), Pixel(26, 15, myRED, 4), Pixel(36, 15, myRED, 4), Pixel(26, 16, myRED, 2), Pixel(38, 16, myRED, 2), Pixel(31, 17, myRED, 4), Pixel(29, 18, myRED, 8), Pixel(29, 19, myRED, 2), Pixel(35, 19, myRED, 2), Pixel(32, 21, myRED, 2), Pixel(31, 22, myRED, 4), Pixel(31, 23, myRED, 4), Pixel(32, 24, myRED, 2)
};

Pixel static uploading[] = {
  Pixel(26, 4, myBLUE, 14), Pixel(25, 5, myBLUE, 16),
  Pixel(24, 6, myBLUE, 8), Pixel(34, 6, myBLUE, 8),
  Pixel(24, 7, myBLUE, 7), Pixel(35, 7, myBLUE, 7),
  Pixel(24, 8, myBLUE, 6), Pixel(36, 8, myBLUE, 6),
  Pixel(24, 9, myBLUE, 5), Pixel(37, 9, myBLUE, 5),
  Pixel(24, 10, myBLUE, 4), Pixel(38, 10, myBLUE, 4),
  Pixel(24, 11, myBLUE, 3), Pixel(39, 11, myBLUE, 3),
  Pixel(24, 12, myBLUE, 3), Pixel(39, 12, myBLUE, 3),
  Pixel(24, 13, myBLUE, 7), Pixel(35, 13, myBLUE, 7),
  Pixel(24, 14, myBLUE, 7), Pixel(35, 14, myBLUE, 7),
  Pixel(24, 15, myBLUE, 7), Pixel(35, 15, myBLUE, 7),
  Pixel(24, 16, myBLUE, 7), Pixel(35, 16, myBLUE, 7),
  Pixel(24, 17, myBLUE, 7), Pixel(35, 17, myBLUE, 7),
  Pixel(24, 18, myBLUE, 7), Pixel(35, 18, myBLUE, 7),
  Pixel(24, 19, myBLUE, 7), Pixel(35, 19, myBLUE, 7),
  Pixel(25, 20, myBLUE, 16),
  Pixel(26, 21, myBLUE, 14),
  Pixel(31, 22, myBLUE, 4),
  Pixel(31, 23, myBLUE, 4),
  Pixel(31, 24, myBLUE, 4),
  Pixel(31, 25, myBLUE, 4),
  Pixel(30, 26, myBLUE, 6),
  Pixel(29, 27, myBLUE, 7),
  Pixel(1, 28, myBLUE, 64),
  Pixel(1, 29, myBLUE, 64),
  Pixel(1, 30, myBLUE, 64),
  Pixel(29, 31, myBLUE, 8),
  Pixel(30, 32, myBLUE, 6)
};

Pixel static test[] = {
  Pixel(1, 1, myWHITE, 3), Pixel(62, 1, myWHITE, 3),
  Pixel(1, 2, myWHITE, 3), Pixel(62, 2, myWHITE, 3),
  Pixel(1, 31, myWHITE, 3), Pixel(62, 31, myWHITE, 3),
  Pixel(1, 32, myWHITE, 3), Pixel(62, 32, myWHITE, 3),
};

Pixel static quiet[] = {
  Pixel(30, 1, myRED, 7),
  Pixel(27, 2, myRED, 13),
  Pixel(25, 3, myRED, 17),
  Pixel(24, 4, myRED, 19),
  Pixel(23, 5, myRED, 21),
  Pixel(22, 6, myRED, 23),
  Pixel(21, 7, myRED, 25),
  Pixel(20, 8, myRED, 27),
  Pixel(20, 9, myRED, 27),
  Pixel(19, 10, myRED, 29),
  Pixel(19, 11, myRED, 29),
  Pixel(19, 12, myRED, 29),
  Pixel(18, 13, myRED, 2), Pixel(20, 13, myWHITE, 27), Pixel(47, 13, myRED, 2),
  Pixel(18, 14, myRED, 2), Pixel(20, 14, myWHITE, 3), Pixel(25, 14, myWHITE, 2), Pixel(28, 14, myWHITE, 2), Pixel(31, 14, myWHITE, 1), Pixel(35, 14, myWHITE, 1), Pixel(40, 14, myWHITE, 1), Pixel(46, 14, myWHITE, 1), Pixel(47, 14, myRED, 2),
  Pixel(18, 15, myRED, 2), Pixel(20, 15, myWHITE, 2), Pixel(23, 15, myWHITE, 2), Pixel(26, 15, myWHITE, 1), Pixel(28, 15, myWHITE, 2), Pixel(31, 15, myWHITE, 2), Pixel(34, 15, myWHITE, 2), Pixel(37, 15, myWHITE, 6), Pixel(44, 15, myWHITE, 3), Pixel(47, 15, myRED, 2),
  Pixel(18, 16, myRED, 2), Pixel(20, 16, myWHITE, 2), Pixel(23, 16, myWHITE, 2), Pixel(26, 16, myWHITE, 1), Pixel(28, 16, myWHITE, 2), Pixel(31, 16, myWHITE, 2), Pixel(34, 16, myWHITE, 2), Pixel(39, 16, myWHITE, 4), Pixel(44, 16, myWHITE, 3), Pixel(47, 16, myRED, 2),
  Pixel(18, 17, myRED, 2), Pixel(20, 17, myWHITE, 2), Pixel(23, 17, myWHITE, 1), Pixel(25, 17, myWHITE, 2), Pixel(28, 17, myWHITE, 2), Pixel(31, 17, myWHITE, 2), Pixel(34, 17, myWHITE, 2), Pixel(37, 17, myWHITE, 6), Pixel(44, 17, myWHITE, 3), Pixel(47, 17, myRED, 2),
  Pixel(18, 18, myRED, 2), Pixel(20, 18, myWHITE, 3), Pixel(22, 18, myWHITE, 1), Pixel(24, 18, myWHITE, 1), Pixel(26, 18, myWHITE, 2), Pixel(30, 18, myWHITE, 2), Pixel(35, 18, myWHITE, 1), Pixel(40, 18, myWHITE, 3), Pixel(44, 18, myWHITE, 3), Pixel(47, 18, myRED, 2),
  Pixel(18, 19, myRED, 2), Pixel(20, 19, myWHITE, 27), Pixel(47, 19, myRED, 2),
  Pixel(19, 20, myRED, 29),
  Pixel(19, 21, myRED, 29),
  Pixel(19, 22, myRED, 29),
  Pixel(20, 23, myRED, 27),
  Pixel(20, 24, myRED, 27),
  Pixel(21, 25, myRED, 25),
  Pixel(22, 26, myRED, 23),
  Pixel(23, 27, myRED, 21),
  Pixel(24, 28, myRED, 19),
  Pixel(25, 29, myRED, 17),
  Pixel(27, 30, myRED, 13),
  Pixel(30, 31, myRED, 7)
};

Pixel static bulbasaur[] = {
  Pixel(12, 0, myDARKGRAY, 3), Pixel(11, 1, myDARKGRAY), Pixel(12, 1, myBRIGHTGREEN, 4), Pixel(15, 1, myDARKGRAY), Pixel(9, 2, myDARKGRAY, 3), Pixel(12, 2, myBRIGHTGREEN), Pixel(13, 2, myDARKGRAY), Pixel(14, 2, myBRIGHTGREEN), Pixel(15, 2, myDARKGRAY),  Pixel(6, 3, myDARKGRAY, 3), Pixel(9, 3, myBRIGHTGREEN), Pixel(10, 3, myDARKGRAY), Pixel(11, 3, myBRIGHTGREEN), Pixel(12, 3, myDARKGRAY), Pixel(13, 3, myBRIGHTGREEN), Pixel(14, 3, myDARKGRAY), Pixel(15, 3, myBRIGHTGREEN), Pixel(16, 3, myDARKGRAY, 3), Pixel(3, 4, myDARKGRAY), Pixel(6, 4, myDARKGRAY), Pixel(7, 4, myBRIGHTGREEN, 2), Pixel(9, 4, myDARKGRAY), Pixel(10, 4, myBRIGHTGREEN, 2), Pixel(12, 4, myDARKGRAY), Pixel(13, 4, myBRIGHTGREEN), Pixel(14, 4, myDARKGRAY), Pixel(15, 4, myBRIGHTGREEN, 3), Pixel(18, 4, myDARKGRAY), Pixel(2, 5, myDARKGRAY), Pixel(3, 5, myTEAL), Pixel(4, 5, myDARKGRAY, 3), Pixel(7, 5, myBRIGHTGREEN), Pixel(8, 5, myDARKGRAY), Pixel(9, 5, myBRIGHTGREEN, 3), Pixel(12, 5, myDARKGRAY), Pixel(14, 5, myBRIGHTGREEN), Pixel(13, 5, myDARKGRAY), Pixel(15, 5, myBRIGHTGREEN, 3), Pixel(18, 5, myDARKGRAY), Pixel(2, 6, myDARKGRAY), Pixel(3, 6, myTEAL, 4), Pixel(7, 6, myDARKGRAY, 2), Pixel(9, 6, myBRIGHTGREEN, 2),  Pixel(11, 6, myDARKGRAY), Pixel(12, 6, myBRIGHTGREEN, 4), Pixel(16, 6, myDARKGRAY), Pixel(17, 6, myBRIGHTGREEN, 2), Pixel(19, 6, myDARKGRAY), Pixel(2, 7, myDARKGRAY), Pixel(3, 7, myTEAL, 4), Pixel(7, 7, myDARKTEAL, 2), Pixel(9, 7, myDARKGRAY), Pixel(10, 7, myBRIGHTGREEN), Pixel(11, 7, myDARKGRAY), Pixel(12, 7, myBRIGHTGREEN, 4), Pixel(16, 7, myDARKGRAY), Pixel(17, 7, myBRIGHTGREEN, 2), Pixel(19, 7, myDARKGRAY), Pixel(1, 8, myDARKGRAY), Pixel(2, 8, myTEAL, 2), Pixel(4, 8, myDARKTEAL), Pixel(5, 8, myTEAL), Pixel(6, 8, myDARKTEAL, 2), Pixel(8, 8, myTEAL, 2), Pixel(10, 8, myDARKGRAY, 3), Pixel(13, 8, myBRIGHTGREEN, 3), Pixel(16, 8, myDARKGRAY), Pixel(17, 8, myBRIGHTGREEN), Pixel(18, 8, myDARKGRAY), Pixel(0, 9, myDARKGRAY, 2), Pixel(2, 9, myDARKTEAL),  Pixel(3, 9, myTEAL, 9), Pixel(12, 9, myDARKGRAY), Pixel(13, 9, myBRIGHTGREEN, 2), Pixel(15, 9, myDARKGRAY, 3), Pixel(18, 9, myDARKTEAL), Pixel(19, 9, myDARKGRAY), Pixel(0, 10, myDARKGRAY, 2), Pixel(2, 10, myDARKTEAL), Pixel(3, 10, myTEAL, 3), Pixel(6, 10, myDARKTEAL), Pixel(7, 10, myTEAL, 4), Pixel(11, 10, myDARKGRAY), Pixel(12, 10, myDARKTEAL), Pixel(13, 10, myDARKGRAY, 3), Pixel(16, 10, myDARKTEAL, 3), Pixel(19, 10, myDARKGRAY), Pixel(0, 11, myDARKGRAY), Pixel(1, 11, myDARKTEAL), Pixel(2, 11, myTEAL, 3), Pixel(5, 11, myDARKTEAL), Pixel(6, 11, myTEAL), Pixel(7, 11, myDARKGRAY, 2), Pixel(9, 11, myTEAL, 2), Pixel(11, 11, myDARKTEAL, 5), Pixel(16, 11, myDARKGRAY), Pixel(17, 11, myDARKTEAL), Pixel(18, 11, myWHITE), Pixel(19, 11, myDARKGRAY), Pixel(0, 12, myDARKGRAY), Pixel(1, 12, myDARKTEAL), Pixel(2, 12, myTEAL, 4), Pixel(6, 12, myDARKGRAY), Pixel(7, 12, myRED), Pixel(8, 12, myWHITE, 2), Pixel(10, 12, myTEAL), Pixel(11, 12, myDARKTEAL), Pixel(12, 12, myDARKGRAY), Pixel(13, 12, myDARKTEAL), Pixel(14, 12, myDARKGRAY), Pixel(15, 12, myWHITE), Pixel(16, 12, myDARKGRAY, 3), Pixel(1, 13, myDARKGRAY), Pixel(2, 13, myDARKTEAL), Pixel(3, 13, myTEAL, 3), Pixel(6, 13, myDARKGRAY), Pixel(7, 13, myRED), Pixel(8, 13, myWHITE), Pixel(9, 13, myTEAL), Pixel(10, 13, myDARKTEAL), Pixel(11, 13, myDARKGRAY), Pixel(12, 13, myDARKTEAL, 3), Pixel(15, 13, myDARKGRAY), Pixel(2, 14, myDARKGRAY, 2), Pixel(4, 14, myDARKTEAL, 6), Pixel(10, 14, myDARKGRAY), Pixel(11, 14, myDARKTEAL, 4), Pixel(15, 14, myDARKGRAY), Pixel(4, 15, myDARKGRAY, 8), Pixel(12, 15, myWHITE), Pixel(13, 15, myDARKTEAL), Pixel(14, 15, myWHITE), Pixel(15, 15, myDARKGRAY), Pixel(12, 16, myDARKGRAY, 3)
};

Pixel static charmander[] = {
  Pixel(25, 7, myDARKGRAY, 4), Pixel(38, 7, myDARKGRAY), Pixel(24, 8, myDARKGRAY), Pixel(25, 8, myORANGE, 4), Pixel(29, 8, myDARKGRAY), Pixel(37, 8, myDARKGRAY), Pixel(38, 8, myRED), Pixel(39, 8, myDARKGRAY), Pixel(23, 9, myDARKGRAY), Pixel(24, 9, myORANGE, 6), Pixel(30, 9, myDARKGRAY), Pixel(37, 9, myDARKGRAY), Pixel(38, 9, myRED, 2), Pixel(40, 9, myDARKGRAY), Pixel(23, 10, myDARKGRAY), Pixel(24, 10, myORANGE, 6), Pixel(30, 10, myDARKGRAY), Pixel(37, 10, myDARKGRAY), Pixel(38, 10, myRED, 2), Pixel(40, 10, myDARKGRAY), Pixel(22, 11, myDARKGRAY), Pixel(23, 11, myORANGE, 8), Pixel(31, 11, myDARKGRAY), Pixel(36, 11, myDARKGRAY), Pixel(37, 11, myRED, 4), Pixel(41, 11, myDARKGRAY), Pixel(21, 12, myDARKGRAY), Pixel(22, 12, myORANGE, 4), Pixel(26, 12, myWHITE), Pixel(27, 12, myDARKGRAY), Pixel(28, 12, myORANGE, 3), Pixel(31, 12, myDARKGRAY), Pixel(36, 12, myDARKGRAY), Pixel(37, 12, myRED, 2), Pixel(39, 12, myYELLOW), Pixel(40, 12, myRED), Pixel(41, 12, myDARKGRAY), Pixel(21, 13, myDARKGRAY), Pixel(22, 13, myORANGE, 4), Pixel(26, 13, myDARKGRAY, 2), Pixel(28, 13, myORANGE, 4), Pixel(32, 13, myDARKGRAY), Pixel(36, 13, myDARKGRAY), Pixel(37, 13, myRED), Pixel(38, 13, myYELLOW, 2), Pixel(40, 13, myRED), Pixel(41, 13, myDARKGRAY), Pixel(21, 14, myDARKGRAY), Pixel(22, 14, myORANGE, 4), Pixel(26, 14, myDARKGRAY, 2), Pixel(28, 14, myORANGE, 4), Pixel(32, 14, myDARKGRAY), Pixel(37, 14, myDARKGRAY), Pixel(38, 14, myYELLOW), Pixel(39, 14, myDARKGRAY, 2), Pixel(22, 15, myDARKGRAY), Pixel(23, 15, myORANGE, 10), Pixel(33, 15, myDARKGRAY), Pixel(37, 15, myDARKGRAY), Pixel(38, 15, myORANGE), Pixel(39, 15, myDARKGRAY), Pixel(23, 16, myDARKGRAY, 2), Pixel(25, 16, myORANGE, 9), Pixel(34, 16, myDARKGRAY), Pixel(36, 16, myDARKGRAY), Pixel(37, 16, myORANGE, 2), Pixel(39, 16, myDARKGRAY), Pixel(25, 17, myDARKGRAY, 3), Pixel(28, 17, myORANGE, 2), Pixel(30, 17, myDARKGRAY), Pixel(31, 17, myORANGE, 3), Pixel(34, 17, myDARKGRAY, 2), Pixel(36, 17, myORANGE, 2), Pixel(38, 17, myDARKGRAY), Pixel(26, 18, myDARKGRAY), Pixel(27, 18, myYELLOW, 2), Pixel(29, 18, myDARKGRAY), Pixel(30, 18, myORANGE, 5), Pixel(35, 18, myDARKGRAY), Pixel(36, 18, myORANGE, 2), Pixel(38, 18, myDARKGRAY), Pixel(26, 19, myDARKGRAY), Pixel(27, 19, myYELLOW, 3), Pixel(30, 19, myDARKGRAY, 2), Pixel(32, 19, myORANGE, 3), Pixel(35, 19, myDARKGRAY), Pixel(36, 19, myORANGE), Pixel(37, 19, myDARKGRAY), Pixel(25, 20, myDARKGRAY), Pixel(26, 20, myWHITE), Pixel(27, 20, myDARKGRAY), Pixel(28, 20, myYELLOW, 3), Pixel(31, 20, myORANGE, 4), Pixel(35, 20, myDARKGRAY, 2), Pixel(26, 21, myDARKGRAY, 3), Pixel(29, 21, myYELLOW, 2), Pixel(31, 21, myORANGE, 3), Pixel(34, 21, myDARKGRAY, 2), Pixel(29, 22, myDARKGRAY, 3), Pixel(32, 22, myORANGE), Pixel(33, 22, myDARKGRAY, 2), Pixel(30, 23, myDARKGRAY), Pixel(31, 23, myORANGE, 3), Pixel(34, 23, myDARKGRAY), Pixel(31, 24, myDARKGRAY, 4)
};

Pixel static squirtle[] = {
  Pixel(45, 15, myDARKGRAY, 4), Pixel(58, 15, myDARKGRAY, 4), Pixel(44, 16, myDARKGRAY), Pixel(45, 16, myLIGHTBLUE, 3), Pixel(48, 16, myDARKBLUE), Pixel(49, 16, myDARKGRAY, 2), Pixel(57, 16, myDARKGRAY), Pixel(58, 16, myLIGHTBLUE, 4), Pixel(62, 16, myDARKGRAY), Pixel(43, 17, myDARKGRAY), Pixel(44, 17, myLIGHTBLUE, 6), Pixel(50, 17, myDARKBLUE), Pixel(51, 17, myDARKGRAY, 2), Pixel(56, 17, myDARKGRAY, 2), Pixel(58, 17, myLIGHTBLUE, 3), Pixel(61, 17, myDARKBLUE, 2), Pixel(63, 17, myDARKGRAY), Pixel(43, 18, myDARKGRAY), Pixel(44, 18, myLIGHTBLUE, 7), Pixel(51, 18, myDARKGRAY), Pixel(52, 18, myDARKBROWN), Pixel(53, 18, myDARKGRAY, 2), Pixel(56, 18, myDARKGRAY), Pixel(57, 18, myLIGHTBLUE, 2), Pixel(59, 18, myDARKBLUE), Pixel(60, 18, myDARKGRAY), Pixel(61, 18, myDARKBLUE, 2), Pixel(63, 18, myDARKGRAY), Pixel(42, 19, myDARKGRAY), Pixel(43, 19, myDARKBROWN), Pixel(44, 19, myLIGHTBLUE, 7), Pixel(51, 19, myDARKBLUE), Pixel(52, 19, myDARKBROWN), Pixel(53, 19, myBROWN), Pixel(54, 19, myDARKBROWN), Pixel(55, 19, myDARKGRAY), Pixel(56, 19, myDARKBLUE), Pixel(57, 19, myLIGHTBLUE), Pixel(58, 19, myDARKBLUE), Pixel(59, 19, myDARKGRAY), Pixel(60, 19, myDARKBLUE, 3), Pixel(63, 19, myDARKGRAY), Pixel(42, 20, myDARKGRAY), Pixel(43, 20, myLIGHTBLUE, 4), Pixel(47, 20, myWHITE), Pixel(48, 20, myDARKGRAY), Pixel(49, 20, myLIGHTBLUE, 2), Pixel(51, 20, myDARKBLUE), Pixel(52, 20, myLIGHTGRAY), Pixel(53, 20, myBROWN, 2), Pixel(55, 20, myDARKBROWN), Pixel(56, 20, myDARKGRAY), Pixel(57, 20, myDARKBLUE, 2), Pixel(59, 20, myDARKGRAY),  Pixel(60, 20, myDARKBLUE, 2), Pixel(62, 20, myDARKGRAY), Pixel(42, 21, myDARKGRAY), Pixel(43, 21, myDARKBLUE), Pixel(44, 21, myLIGHTBLUE, 3), Pixel(47, 21, myDARKGRAY), Pixel(48, 21, myDARKBROWN), Pixel(49, 21, myLIGHTBLUE), Pixel(50, 21, myDARKBLUE, 2), Pixel(52, 21, myWHITE), Pixel(53, 21, myLIGHTGRAY), Pixel(54, 21, myBROWN, 2), Pixel(56, 21, myDARKGRAY), Pixel(57, 21, myDARKBLUE), Pixel(58, 21, myDARKGRAY, 4), Pixel(43, 22, myDARKGRAY), Pixel(44, 22, myDARKBLUE, 2), Pixel(46, 22, myLIGHTBLUE), Pixel(47, 22, myDARKGRAY), Pixel(48, 22, myDARKBROWN), Pixel(49, 22, myDARKBLUE, 3), Pixel(52, 22, myDARKGRAY), Pixel(53, 22, myWHITE, 2), Pixel(55, 22, myBROWN, 2), Pixel(57, 22, myDARKGRAY, 2), Pixel(44, 23, myDARKGRAY, 2), Pixel(46, 23, myDARKBLUE, 4), Pixel(50, 23, myDARKGRAY, 2), Pixel(52, 23, myLIGHTBLUE, 2), Pixel(54, 23, myWHITE), Pixel(55, 23, myBROWN, 2), Pixel(57, 23, myDARKGRAY), Pixel(44, 24, myDARKGRAY), Pixel(45, 24, myLIGHTBLUE), Pixel(46, 24, myDARKGRAY, 4), Pixel(50, 24, myLIGHTBLUE, 3), Pixel(53, 24, myDARKBLUE), Pixel(54, 24, myWHITE), Pixel(55, 24, myBROWN, 2), Pixel(57, 24, myDARKGRAY), Pixel(45, 25, myDARKGRAY, 2), Pixel(47, 25, myYELLOW, 2), Pixel(49, 25, myDARKGRAY), Pixel(50, 25, myLIGHTBLUE, 2), Pixel(52, 25, myDARKBLUE), Pixel(53, 25, myDARKGRAY), Pixel(54, 25, myWHITE), Pixel(55, 25, myBROWN, 2), Pixel(57, 25, myDARKGRAY), Pixel(47, 26, myDARKGRAY), Pixel(48, 26, myYELLOW, 2), Pixel(50, 26, myDARKGRAY, 4), Pixel(54, 26, myLIGHTGRAY), Pixel(55, 26, myBROWN, 2), Pixel(57, 26, myDARKGRAY), Pixel(46, 27, myDARKGRAY), Pixel(47, 27, myDARKBLUE), Pixel(48, 27, myDARKGRAY), Pixel(49, 27, myDARKBROWN), Pixel(50, 27, myYELLOW, 3), Pixel(53, 27, myDARKBROWN), Pixel(54, 27, myDARKGRAY), Pixel(55, 27, myLIGHTGRAY), Pixel(56, 27, myDARKGRAY), Pixel(47, 28, myDARKGRAY, 4), Pixel(51, 28, myDARKBROWN, 2), Pixel(53, 28, myLIGHTBLUE), Pixel(54, 28, myDARKGRAY), Pixel(55, 28, myLIGHTGRAY), Pixel(56, 28, myDARKGRAY), Pixel(50, 29, myDARKGRAY, 3), Pixel(53, 29, myLIGHTBLUE), Pixel(54, 29, myDARKGRAY, 2), Pixel(51, 30, myDARKGRAY), Pixel(52, 30, myDARKBLUE, 3), Pixel(55, 30, myDARKGRAY), Pixel(52, 31, myDARKGRAY, 3)
};

Pixel static moog[] = {
  Pixel(7, 7, myDARKGRAY, 1), Pixel(6, 8, myDARKGRAY, 1), Pixel(7, 8, myPINK, 1), Pixel(8, 8, myDARKGRAY, 1), Pixel(7, 9, myDARKGRAY, 1), Pixel(9, 9, myDARKGRAY, 1), Pixel(4, 10, myDARKGRAY, 2), Pixel(9, 10, myDARKGRAY, 1), Pixel(12, 10, myDARKGRAY, 2), Pixel(3, 11, myDARKGRAY, 1), Pixel(4, 11, myLIGHTPURPLE, 1), Pixel(5, 11, myLIGHTGRAY, 1), Pixel(6, 11, myDARKGRAY, 6), Pixel(12, 11, myLIGHTGRAY, 1), Pixel(13, 11, myLIGHTPURPLE, 1), Pixel(14, 11, myDARKGRAY, 1), Pixel(3, 12, myDARKGRAY, 1), Pixel(4, 12, myLIGHTPURPLE, 1), Pixel(5, 12, myDARKPINK, 1), Pixel(6, 12, myLIGHTPURPLE, 2), Pixel(8, 12, myWHITE, 2), Pixel(10, 12, myLIGHTPURPLE, 2), Pixel(12, 12, myDARKPINK, 1), Pixel(13, 12, myLIGHTPURPLE, 1), Pixel(14, 12, myDARKGRAY, 1), Pixel(3, 13, myDARKGRAY, 1), Pixel(4, 13, myLIGHTGRAY, 1), Pixel(5, 13, myLIGHTPURPLE, 1), Pixel(6, 13, myWHITE, 6), Pixel(12, 13, myLIGHTPURPLE, 1), Pixel(13, 13, myLIGHTGRAY, 1), Pixel(14, 13, myDARKGRAY, 1), Pixel(3, 14, myDARKGRAY, 1), Pixel(4, 14, myLIGHTPURPLE, 1), Pixel(5, 14, myWHITE, 8), Pixel(13, 14, myLIGHTPURPLE, 1), Pixel(14, 14, myDARKGRAY, 1), Pixel(3, 15, myDARKGRAY, 1), Pixel(4, 15, myLIGHTPURPLE, 1), Pixel(5, 15, myWHITE, 8), Pixel(13, 15, myLIGHTPURPLE, 1), Pixel(14, 15, myDARKGRAY, 1), Pixel(3, 16, myDARKGRAY, 1), Pixel(4, 16, myLIGHTPURPLE, 1), Pixel(5, 16, myWHITE, 8), Pixel(13, 16, myLIGHTPURPLE, 1), Pixel(14, 16, myDARKGRAY, 1), Pixel(3, 17, myDARKGRAY, 1), Pixel(4, 17, myLIGHTPURPLE, 1), Pixel(5, 17, myROYALBLUE, 2), Pixel(7, 17, myWHITE, 4), Pixel(11, 17, myROYALBLUE, 2), Pixel(13, 17, myLIGHTPURPLE, 1), Pixel(14, 17, myDARKGRAY, 1), Pixel(1, 18, myDARKGRAY, 3), Pixel(4, 18, myLIGHTPURPLE, 1), Pixel(5, 18, myWHITE, 1), Pixel(6, 18, myROYALBLUE, 2), Pixel(8, 18, myWHITE, 2), Pixel(10, 18, myROYALBLUE, 2), Pixel(12, 18, myWHITE, 1), Pixel(13, 18, myLIGHTPURPLE, 1), Pixel(14, 18, myDARKGRAY, 3), Pixel(1, 19, myDARKGRAY, 1), Pixel(2, 19, myDARKPINK, 1), Pixel(3, 19, myDARKGRAY, 1), Pixel(4, 19, myLIGHTPURPLE, 1), Pixel(5, 19, myWHITE, 2), Pixel(7, 19, myROYALBLUE, 1), Pixel(8, 19, myWHITE, 2), Pixel(10, 19, myROYALBLUE, 1), Pixel(11, 19, myWHITE, 2), Pixel(13, 19, myLIGHTPURPLE, 1), Pixel(14, 19, myDARKGRAY, 1), Pixel(15, 19, myDARKPINK, 1), Pixel(16, 19, myDARKGRAY, 1), Pixel(1, 20, myDARKGRAY, 1), Pixel(2, 20, myDARKPINK, 1), Pixel(3, 20, myDARKGRAY, 1), Pixel(4, 20, myLIGHTGRAY, 1), Pixel(5, 20, myWHITE, 3), Pixel(8, 20, myDARKPINK, 2), Pixel(10, 20, myWHITE, 3), Pixel(13, 20, myLIGHTGRAY, 1), Pixel(14, 20, myDARKGRAY, 1), Pixel(15, 20, myDARKPINK, 1), Pixel(16, 20, myDARKGRAY, 1), Pixel(1, 21, myDARKGRAY, 1), Pixel(2, 21, myDARKPINK, 2), Pixel(4, 21, myDARKGRAY, 1), Pixel(5, 21, myWHITE, 3), Pixel(8, 21, myDARKPINK, 2), Pixel(10, 21, myWHITE, 3), Pixel(13, 21, myDARKGRAY, 1), Pixel(14, 21, myDARKPINK, 2), Pixel(16, 21, myDARKGRAY, 1), Pixel(1, 22, myDARKGRAY, 1), Pixel(2, 22, myDARKPINK, 1), Pixel(3, 22, myDARKGRAY, 1), Pixel(4, 22, myWHITE, 10), Pixel(14, 22, myDARKGRAY, 1), Pixel(15, 22, myDARKPINK, 1), Pixel(16, 22, myDARKGRAY, 1), Pixel(2, 23, myDARKGRAY, 1), Pixel(3, 23, myLIGHTPURPLE, 1), Pixel(4, 23, myWHITE, 10), Pixel(14, 23, myLIGHTPURPLE, 1), Pixel(15, 23, myDARKGRAY, 1), Pixel(2, 24, myDARKGRAY, 1), Pixel(3, 24, myWHITE, 1), Pixel(4, 24, myLIGHTGRAY, 1), Pixel(5, 24, myWHITE, 8), Pixel(13, 24, myLIGHTGRAY, 1), Pixel(14, 24, myWHITE, 1), Pixel(15, 24, myDARKGRAY, 1), Pixel(2, 25, myDARKGRAY, 1), Pixel(3, 25, myLIGHTPURPLE, 1), Pixel(4, 25, myDARKGRAY, 1), Pixel(5, 25, myWHITE, 8), Pixel(13, 25, myDARKGRAY, 1), Pixel(14, 25, myLIGHTPURPLE, 1), Pixel(15, 25, myDARKGRAY, 1), Pixel(3, 26, myDARKGRAY, 2), Pixel(5, 26, myLIGHTGRAY, 1), Pixel(6, 26, myWHITE, 1), Pixel(7, 26, myLIGHTGRAY, 4), Pixel(11, 26, myWHITE, 1), Pixel(12, 26, myLIGHTGRAY, 1), Pixel(13, 26, myDARKGRAY, 2), Pixel(4, 27, myDARKGRAY, 1), Pixel(5, 27, myWHITE, 3), Pixel(8, 27, myLIGHTGRAY, 2), Pixel(10, 27, myWHITE, 3), Pixel(13, 27, myDARKGRAY, 1), Pixel(3, 28, myDARKGRAY, 12)
};

Pixel static mage[] = {
  Pixel(35, 3, myDARKGRAY, 2), Pixel(33, 4, myDARKGRAY, 2), Pixel(35, 4, myLIGHTORANGE, 2), Pixel(37, 4, myDARKGRAY, 1), Pixel(32, 5, myDARKGRAY, 1), Pixel(33, 5, myLIGHTORANGE, 3), Pixel(36, 5, myORANGE, 1), Pixel(37, 5, myDARKGRAY, 1), Pixel(30, 6, myDARKGRAY, 2), Pixel(32, 6, myLIGHTORANGE, 3), Pixel(35, 6, myORANGE, 1), Pixel(36, 6, myDARKGRAY, 1), Pixel(28, 7, myDARKGRAY, 2), Pixel(30, 7, myLIGHTORANGE, 4), Pixel(34, 7, myORANGE, 2), Pixel(36, 7, myDARKGRAY, 1), Pixel(22, 8, myDARKGRAY, 6), Pixel(28, 8, myLIGHTORANGE, 4), Pixel(32, 8, myORANGE, 3), Pixel(35, 8, myDARKGRAY, 1), Pixel(21, 9, myDARKGRAY, 1), Pixel(22, 9, myLIGHTORANGE, 8), Pixel(30, 9, myORANGE, 5), Pixel(35, 9, myDARKGRAY, 1), Pixel(22, 10, myDARKGRAY, 1), Pixel(23, 10, myORANGE, 4), Pixel(27, 10, myLIGHTORANGE, 4), Pixel(31, 10, myORANGE, 4), Pixel(35, 10, myDARKGRAY, 1), Pixel(23, 11, myDARKGRAY, 3), Pixel(26, 11, myORANGE, 4), Pixel(30, 11, myLIGHTORANGE, 3), Pixel(33, 11, myORANGE, 1), Pixel(34, 11, myDARKGRAY, 1), Pixel(26, 12, myDARKGRAY, 3), Pixel(29, 12, myORANGE, 6), Pixel(35, 12, myDARKGRAY, 1), Pixel(25, 13, myDARKGRAY, 1), Pixel(26, 13, myYELLOW, 1), Pixel(27, 13, myDARKGRAY, 5), Pixel(32, 13, myORANGE, 4), Pixel(36, 13, myDARKGRAY, 1), Pixel(24, 14, myDARKGRAY, 2), Pixel(26, 14, myYELLOW, 1), Pixel(27, 14, myDARKGRAY, 2), Pixel(29, 14, myYELLOW, 1), Pixel(30, 14, myDARKGRAY, 4), Pixel(34, 14, myORANGE, 3), Pixel(37, 14, myDARKGRAY, 1), Pixel(23, 15, myDARKGRAY, 1), Pixel(24, 15, myBLUE, 1), Pixel(25, 15, myDARKGRAY, 4), Pixel(29, 15, myYELLOW, 1), Pixel(30, 15, myDARKGRAY, 4), Pixel(34, 15, myORANGE, 1), Pixel(35, 15, myDARKGRAY, 1), Pixel(36, 15,myORANGE , 2), Pixel(38, 15, myDARKGRAY, 1), Pixel(22, 16, myDARKGRAY, 1), Pixel(23, 16, myBLUE, 1), Pixel(24, 16, myDARKGRAY, 11), Pixel(35, 16, myBLUE, 1), Pixel(36, 16, myDARKGRAY, 2), Pixel(22, 17, myDARKGRAY, 1), Pixel(23, 17, myBLUE, 3), Pixel(26, 17, myDARKGRAY, 3), Pixel(29, 17, myBLUE, 7), Pixel(36, 17, myDARKGRAY, 1), Pixel(22, 18, myDARKGRAY, 2), Pixel(24, 18, myBLUE, 6), Pixel(30, 18, myDARKGRAY, 3), Pixel(33, 18, myBLUE, 2), Pixel(35, 18, myDARKGRAY, 1), Pixel(21, 19, myDARKGRAY, 1), Pixel(22, 19, myLIGHTYELLOW, 2), Pixel(24, 19, myDARKGRAY, 1), Pixel(25, 19, myBLUE, 3), Pixel(28, 19, myDARKGRAY, 2), Pixel(30, 19, myBLUE, 6), Pixel(36, 19, myDARKGRAY, 1), Pixel(21, 20, myDARKGRAY, 1), Pixel(22, 20, myLIGHTYELLOW, 2), Pixel(24, 20, myDARKGRAY, 1), Pixel(25, 20, myBLUE, 2), Pixel(27, 20, myDARKGRAY, 3), Pixel(30, 20, myBLUE, 6), Pixel(30, 20, myDARKGRAY, 1), Pixel(22, 21, myDARKGRAY, 2), Pixel(24, 21, myBLUE, 3), Pixel(27, 21, myLIGHTYELLOW, 2), Pixel(29, 21, myDARKGRAY, 1), Pixel(30, 21, myBLUE, 6), Pixel(36, 21, myDARKGRAY, 1), Pixel(22, 22, myDARKGRAY, 1), Pixel(23, 22, myBLUE, 1), Pixel(24, 22, myDARKGRAY, 1), Pixel(26, 22, myBLUE, 2), Pixel(27, 22, myLIGHTYELLOW, 2), Pixel(29, 22, myDARKGRAY, 1), Pixel(30, 22, myBLUE, 6), Pixel(36, 22, myDARKGRAY, 1), Pixel(22, 23, myDARKGRAY, 1), Pixel(23, 23, myBLUE, 1), Pixel(24, 23, myDARKGRAY, 1), Pixel(25, 23, myBLUE, 2), Pixel(27, 23, myDARKGRAY, 3), Pixel(30, 23, myBLUE, 5), Pixel(35, 23, myDARKGRAY, 1), Pixel(22, 24, myDARKGRAY, 1), Pixel(23, 24, myBLUE, 2), Pixel(25, 24, myDARKGRAY, 1), Pixel(26, 24, myBLUE, 4), Pixel(30, 24, myDARKGRAY, 1), Pixel(31, 24, myBLUE, 4), Pixel(35, 24, myDARKGRAY, 1), Pixel(22, 25, myDARKGRAY, 1), Pixel(23, 25, myBLUE, 3), Pixel(26, 25, myDARKGRAY, 1), Pixel(27, 25, myBLUE, 3), Pixel(30, 25, myDARKGRAY, 1), Pixel(31, 25, myBLUE, 4), Pixel(35, 25, myDARKGRAY, 1), Pixel(22, 26, myDARKGRAY, 1), Pixel(23, 26, myBLUE, 4), Pixel(27, 26, myDARKGRAY, 2), Pixel(29, 26, myBLUE, 2), Pixel(31, 26, myDARKGRAY, 1), Pixel(32, 26, myBLUE, 2), Pixel(34, 26, myDARKBLUE, 1), Pixel(35, 26, myBLUE, 1), Pixel(36, 26, myDARKGRAY, 1), Pixel(21, 27, myDARKGRAY, 1), Pixel(22, 27, myBLUE, 10), Pixel(32, 27, myDARKGRAY, 2), Pixel(34, 27, myBLUE, 3), Pixel(37, 27, myDARKGRAY, 1), Pixel(22, 28, myDARKGRAY, 10), Pixel(34, 28, myDARKGRAY, 3)
};

Pixel static chocobo[] = {
  Pixel(48, 6, myDARKGRAY, 2), Pixel(52, 6, myDARKGRAY, 4), Pixel(47, 7, myDARKGRAY, 1), Pixel(48, 7, myLIGHTBROWN, 1), Pixel(49, 7, myYELLOW, 1), Pixel(50, 7, myDARKGRAY, 2), Pixel(52, 7, myYELLOW, 4), Pixel(56, 7, myDARKGRAY, 1), Pixel(46, 8, myDARKGRAY, 1), Pixel(47, 8, myLIGHTBROWN, 1), Pixel(48, 8, myYELLOW, 1), Pixel(49, 8, myLIGHTBROWN, 1), Pixel(50, 8, myDARKGRAY, 1), Pixel(51, 8, myYELLOW, 5), Pixel(56, 8, myDARKGRAY, 1), Pixel(45, 9, myDARKGRAY, 1), Pixel(46, 9, myYELLOW, 2), Pixel(48, 9, myLIGHTBROWN, 3), Pixel(51, 9, myYELLOW, 3), Pixel(54, 9, myDARKGRAY, 2), Pixel(45, 10, myDARKGRAY, 1), Pixel(46, 10, myYELLOW, 7), Pixel(53, 10, myLIGHTBROWN, 1), Pixel(54, 10, myYELLOW, 1), Pixel(55, 10, myDARKGRAY, 1), Pixel(44, 11, myDARKGRAY, 1), Pixel(45, 11, myYELLOW, 9), Pixel(54, 11, myLIGHTBROWN, 1), Pixel(55, 11, myYELLOW, 1), Pixel(56, 11, myDARKGRAY, 1), Pixel(44, 12, myDARKGRAY, 1), Pixel(45, 12, myYELLOW, 9), Pixel(54, 12, myDARKGRAY, 1), Pixel(55, 12, myYELLOW, 1), Pixel(56, 12, myDARKGRAY, 1), Pixel(59, 12, myDARKGRAY, 3), Pixel(43, 13, myDARKGRAY, 1), Pixel(44, 13, myYELLOW, 2), Pixel(46, 13, myWHITE, 2), Pixel(48, 13, myYELLOW, 6), Pixel(54, 13, myDARKGRAY, 1), Pixel(55, 13, myYELLOW, 1), Pixel(56, 13, myDARKGRAY, 1), Pixel(58, 13, myDARKGRAY, 1), Pixel(59, 13, myLIGHTBROWN, 3), Pixel(62, 13, myDARKGRAY, 2), Pixel(43, 14, myDARKGRAY, 1), Pixel(44, 14, myORANGE, 1), Pixel(45, 14, myYELLOW, 1), Pixel(47, 14, myWHITE, 2), Pixel(49, 14, myYELLOW, 5), Pixel(54, 14, myDARKGRAY, 4), Pixel(58, 14, myYELLOW, 6), Pixel(64, 14, myDARKGRAY, 1), Pixel(42, 15, myDARKGRAY, 1), Pixel(43, 15, myORANGE, 3), Pixel(46, 15, myWHITE, 1), Pixel(48, 15, myWHITE, 1), Pixel(49, 15, myYELLOW, 4), Pixel(53, 15, myLIGHTBROWN, 1), Pixel(54, 15, myDARKGRAY, 4), Pixel(58, 15, myLIGHTBROWN, 1), Pixel(59, 15, myYELLOW, 4), Pixel(63, 15, myDARKGRAY, 1), Pixel(42, 16, myDARKGRAY, 1), Pixel(43, 16, myORANGE, 3), Pixel(46, 16, myBLUE, 2), Pixel(48, 16, myWHITE, 1), Pixel(49, 16, myYELLOW, 2), Pixel(51, 16, myLIGHTBROWN, 3), Pixel(54, 16, myDARKGRAY, 3), Pixel(57, 16, myLIGHTBROWN, 1), Pixel(58, 16, myYELLOW, 4), Pixel(62, 16, myLIGHTBROWN, 1), Pixel(63, 16, myDARKGRAY, 1), Pixel(42, 17, myDARKGRAY, 1),  Pixel(43, 17, myYELLOW, 1), Pixel(44, 17, myORANGE, 4), Pixel(48, 17, myLIGHTBROWN, 2), Pixel(50, 17, myYELLOW, 2), Pixel(52, 17, myLIGHTBROWN, 1), Pixel(53, 17, myDARKGRAY, 2), Pixel(55, 17, myLIGHTBROWN, 2), Pixel(57, 17, myYELLOW, 7), Pixel(64, 17, myDARKGRAY, 1), Pixel(43, 18, myDARKGRAY, 7), Pixel(50, 18, myYELLOW, 2), Pixel(52, 18, myDARKGRAY, 2), Pixel(54, 18, myLIGHTBROWN, 2), Pixel(56, 18, myDARKGRAY, 1), Pixel(57, 18, myYELLOW, 6), Pixel(63, 18, myDARKGRAY, 1), Pixel(47, 19, myDARKGRAY, 1), Pixel(48, 19, myLIGHTBROWN, 2), Pixel(50, 19, myYELLOW, 2), Pixel(51, 19, myLIGHTBROWN, 1), Pixel(53, 19, myYELLOW, 3), Pixel(56, 19, myLIGHTBROWN, 1), Pixel(57, 19, myDARKGRAY, 2), Pixel(59, 19, myYELLOW, 2), Pixel(61, 19, myLIGHTBROWN, 2), Pixel(63, 19, myDARKGRAY, 1), Pixel(47, 20, myDARKGRAY, 1), Pixel(48, 20, myYELLOW, 11), Pixel(59, 20, myDARKGRAY, 1), Pixel(60, 20, myLIGHTBROWN, 2), Pixel(62, 20, myDARKGRAY, 1), Pixel(46, 21, myDARKGRAY, 1), Pixel(47, 21, myYELLOW, 2), Pixel(49, 21, myLIGHTBROWN, 1), Pixel(50, 21, myYELLOW, 10), Pixel(60, 21, myDARKGRAY, 2), Pixel(47, 22, myDARKGRAY, 3), Pixel(50, 22, myYELLOW, 10), Pixel(60, 22, myDARKGRAY, 1), Pixel(47, 23, myDARKGRAY, 4), Pixel(51, 23, myYELLOW, 8), Pixel(59, 23, myLIGHTBROWN, 1), Pixel(60, 23, myDARKGRAY, 2), Pixel(46, 24, myDARKGRAY, 1), Pixel(47, 24, myWHITE, 3), Pixel(50, 24, myORANGE, 1), Pixel(51, 24, myDARKGRAY, 3), Pixel(54, 24, myLIGHTBROWN, 2), Pixel(56, 24, myDARKGRAY, 3), Pixel(59, 24, myORANGE, 2), Pixel(61, 24, myWHITE, 1), Pixel(62, 24, myDARKGRAY, 1), Pixel(46, 25, myDARKGRAY, 1), Pixel(47, 25, myWHITE, 2), Pixel(49, 25, myORANGE, 6), Pixel(55, 25, myDARKGRAY, 2), Pixel(57, 25, myORANGE, 3), Pixel(60, 25, myDARKGRAY, 2), Pixel(47, 26, myDARKGRAY, 1), Pixel(48, 26, myWHITE, 3), Pixel(51, 26, myORANGE, 5), Pixel(56, 26, myWHITE, 1), Pixel(57, 26, myDARKGRAY, 1), Pixel(58, 26, myORANGE, 1), Pixel(59, 26, myDARKGRAY, 1), Pixel(48, 27, myDARKGRAY, 6), Pixel(54, 27, myORANGE, 2), Pixel(56, 27, myWHITE, 1), Pixel(57, 27, myDARKGRAY, 2), Pixel(54, 28, myDARKGRAY, 3)
};

void displayTest(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(test) / sizeof(test[0])); i += 1) {
    test[i].render(display);
  }
}

void displayWifiConnecting(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(wifiConnecting) / sizeof(wifiConnecting[0])); i += 1) {
    wifiConnecting[i].render(display);
  }
}

void displayWifiError(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(wifiError) / sizeof(wifiError[0])); i += 1) {
    wifiError[i].render(display);
  }
}

void displayUploading(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(uploading) / sizeof(uploading[0])); i += 1) {
    uploading[i].render(display);
  }
}

void displayQuiet(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(quiet) / sizeof(quiet[0])); i += 1) {
    quiet[i].render(display);
  }
}

void displayPokemon(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(bulbasaur) / sizeof(bulbasaur[0])); i += 1) {
    bulbasaur[i].render(display);
  }

  for (byte i = 0; i < (sizeof(charmander) / sizeof(charmander[0])); i += 1) {
    charmander[i].render(display);
  }

  for (byte i = 0; i < (sizeof(squirtle) / sizeof(squirtle[0])); i += 1) {
    squirtle[i].render(display);
  }
}

void displayFinalFantasy(PxMATRIX display) {
  display.clearDisplay();

  for (byte i = 0; i < (sizeof(moog) / sizeof(moog[0])); i += 1) {
    moog[i].render(display);
  }

  for (byte i = 0; i < (sizeof(mage) / sizeof(mage[0])); i += 1) {
    mage[i].render(display);
  }

  for (byte i = 0; i < (sizeof(chocobo) / sizeof(chocobo[0])); i += 1) {
    chocobo[i].render(display);
  }
}
