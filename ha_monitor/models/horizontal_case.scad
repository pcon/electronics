BOARD_WIDTH = 44;
BOARD_DEPTH = 36;
BOARD_HEIGHT = 22;

WALL_WIDTH = 2;
FLOOR_WIDTH = 1;

PEG_DIAMETER = 3;
PEG_WIDTH = 33;
PEG_DEPTH = 28;
PEG_OFFSET = 9;

LCD_WIDTH = 30;
LCD_DEPTH = 12;

SENSOR_DEPTH = 18;

PLUG_START = 15;

box_width = BOARD_WIDTH + WALL_WIDTH * 2;
box_depth = BOARD_DEPTH + WALL_WIDTH * 2;
box_height = BOARD_HEIGHT + FLOOR_WIDTH;

$fs = 0.01;

module plug_cutout() {
    translate([
        -(WALL_WIDTH / 2),
        PLUG_START,
        FLOOR_WIDTH
    ])
    cube([WALL_WIDTH * 2, box_depth, box_height]);
}

module sensor_cutout() {
    translate([
        box_width - WALL_WIDTH * 1.5,
        (box_depth - SENSOR_DEPTH) / 2,
        FLOOR_WIDTH
    ])
    cube([WALL_WIDTH * 2, SENSOR_DEPTH, box_height]);
}

module lcd_cutout() {
    translate([
        (box_width - LCD_WIDTH) / 2,
        (box_depth - LCD_DEPTH) / 2,
        -(FLOOR_WIDTH / 2)
    ])
    cube([LCD_WIDTH, LCD_DEPTH, FLOOR_WIDTH * 2]); 
}

module peg() {
    offset_z = PEG_OFFSET / 2 + FLOOR_WIDTH;
    translate([0, 0, offset_z])
    cylinder(h = PEG_OFFSET, d = PEG_DIAMETER, center = true);
}

module pegs() {
    offset_x = (BOARD_WIDTH - PEG_WIDTH) / 2 + WALL_WIDTH;
    offset_y = (BOARD_DEPTH - PEG_DEPTH) / 2 + WALL_WIDTH;
    
    translate([offset_x, offset_y, 0])
    union() {
        translate([0, 0, 0])
        peg();
        
        translate([PEG_WIDTH, 0, 0])
        peg();
        
        translate([PEG_WIDTH, PEG_DEPTH, 0])
        peg();
        
        translate([0, PEG_DEPTH, 0])
        peg();
    }
}

module base_box() {
    roundedcube([box_width, box_depth, box_height], false, 1, "z");
}

module board_cutout() {
    translate([WALL_WIDTH, WALL_WIDTH, FLOOR_WIDTH])
    cube([BOARD_WIDTH, BOARD_DEPTH, BOARD_HEIGHT + 10]);
}

// https://danielupshaw.com/openscad-rounded-corners/
module roundedcube(size = [1, 1, 1], center = false, radius = 0.5, apply_to = "all") {
	// If single value, convert to [x, y, z] vector
	size = (size[0] == undef) ? [size, size, size] : size;

	translate_min = radius;
	translate_xmax = size[0] - radius;
	translate_ymax = size[1] - radius;
	translate_zmax = size[2] - radius;

	diameter = radius * 2;

	module build_point(type = "sphere", rotate = [0, 0, 0]) {
		if (type == "sphere") {
			sphere(r = radius);
		} else if (type == "cylinder") {
			rotate(a = rotate)
			cylinder(h = diameter, r = radius, center = true);
		}
	}

	obj_translate = (center == false) ?
		[0, 0, 0] : [
			-(size[0] / 2),
			-(size[1] / 2),
			-(size[2] / 2)
		];

	translate(v = obj_translate) {
		hull() {
			for (translate_x = [translate_min, translate_xmax]) {
				x_at = (translate_x == translate_min) ? "min" : "max";
				for (translate_y = [translate_min, translate_ymax]) {
					y_at = (translate_y == translate_min) ? "min" : "max";
					for (translate_z = [translate_min, translate_zmax]) {
						z_at = (translate_z == translate_min) ? "min" : "max";

						translate(v = [translate_x, translate_y, translate_z])
						if (
							(apply_to == "all") ||
							(apply_to == "xmin" && x_at == "min") || (apply_to == "xmax" && x_at == "max") ||
							(apply_to == "ymin" && y_at == "min") || (apply_to == "ymax" && y_at == "max") ||
							(apply_to == "zmin" && z_at == "min") || (apply_to == "zmax" && z_at == "max")
						) {
							build_point("sphere");
						} else {
							rotate = 
								(apply_to == "xmin" || apply_to == "xmax" || apply_to == "x") ? [0, 90, 0] : (
								(apply_to == "ymin" || apply_to == "ymax" || apply_to == "y") ? [90, 90, 0] :
								[0, 0, 0]
							);
							build_point("cylinder", rotate);
						}
					}
				}
			}
		}
	}
}

union() {
    difference() {
        base_box();
        board_cutout();
        plug_cutout();
        sensor_cutout();
        lcd_cutout();
    }
    pegs();
}