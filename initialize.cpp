#include "main.h"
#include "okapi/api.hpp"
#include "subsystems.hpp"
#include "display.hpp"
#include "pros/misc.h"
using namespace okapi;

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize(){
	//Left Side
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {25_in, 0_ft, 0_deg}}, "leftA", {20, 2.5, 10});
  // profile->generatePath({{0_ft, 0_ft, 0_deg}, {25_in, 0_ft, 0_deg}}, "leftB", {20, 2.5, 10});
  // profile->generatePath({{0_ft, 0_ft, 0_deg}, {22_in, 0_ft, 0_deg}}, "leftC", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {51.5_in, 0_ft, 0_deg}}, "leftD", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {11_in, 0_ft, 0_deg}}, "leftE", {10, 1.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {14_in, 0_ft, 0_deg}}, "leftF", {20, 2.5, 10});
	// //Right Side
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {25_in, 0_ft, 0_deg}}, "rightA", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {25_in, 0_ft, 0_deg}}, "rightB", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {22_in, 0_ft, 0_deg}}, "rightC", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {50.5_in, 0_ft, 0_deg}}, "rightD", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {13_in, 0_ft, 0_deg}}, "rightE", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {14_in, 0_ft, 0_deg}}, "rightF", {20, 2.5, 10});
	// //Skills
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {1_in, 0_ft, 0_deg}}, "1", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {1.5_in, 0_ft, 0_deg}}, "1half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {2_in, 0_ft, 0_deg}}, "2", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {2.5_in, 0_ft, 0_deg}}, "2half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {3_in, 0_ft, 0_deg}}, "3", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {3.5_in, 0_ft, 0_deg}}, "3half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {4_in, 0_ft, 0_deg}}, "4", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {4.5_in, 0_ft, 0_deg}}, "4half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {5_in, 0_ft, 0_deg}}, "5", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {5.5_in, 0_ft, 0_deg}}, "5half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {6_in, 0_ft, 0_deg}}, "6", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {6.5_in, 0_ft, 0_deg}}, "6half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {7_in, 0_ft, 0_deg}}, "7", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {7.5_in, 0_ft, 0_deg}}, "7half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {8_in, 0_ft, 0_deg}}, "8", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {8.5_in, 0_ft, 0_deg}}, "8half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {9_in, 0_ft, 0_deg}}, "9", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {9.5_in, 0_ft, 0_deg}}, "9half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {10_in, 0_ft, 0_deg}}, "10", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {10.5_in, 0_ft, 0_deg}}, "10half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {11_in, 0_ft, 0_deg}}, "11", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {11.5_in, 0_ft, 0_deg}}, "11half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {12_in, 0_ft, 0_deg}}, "12", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {12.5_in, 0_ft, 0_deg}}, "12half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {13_in, 0_ft, 0_deg}}, "13", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {13.5_in, 0_ft, 0_deg}}, "13half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {14_in, 0_ft, 0_deg}}, "14", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {14.5_in, 0_ft, 0_deg}}, "14half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {15_in, 0_ft, 0_deg}}, "15", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {15.5_in, 0_ft, 0_deg}}, "15half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {16_in, 0_ft, 0_deg}}, "16", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {16.5_in, 0_ft, 0_deg}}, "16half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {17_in, 0_ft, 0_deg}}, "17", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {17.5_in, 0_ft, 0_deg}}, "17half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {18_in, 0_ft, 0_deg}}, "18", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {18.5_in, 0_ft, 0_deg}}, "18half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {19_in, 0_ft, 0_deg}}, "19", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {19.5_in, 0_ft, 0_deg}}, "19half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {20_in, 0_ft, 0_deg}}, "20", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {20.5_in, 0_ft, 0_deg}}, "20half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {21_in, 0_ft, 0_deg}}, "21", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {21.5_in, 0_ft, 0_deg}}, "21half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {22_in, 0_ft, 0_deg}}, "22", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {22.5_in, 0_ft, 0_deg}}, "22half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {23_in, 0_ft, 0_deg}}, "23", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {23.5_in, 0_ft, 0_deg}}, "23half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {24_in, 0_ft, 0_deg}}, "24", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {24.5_in, 0_ft, 0_deg}}, "24half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {25_in, 0_ft, 0_deg}}, "25", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {25.5_in, 0_ft, 0_deg}}, "25half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {26_in, 0_ft, 0_deg}}, "26", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {26.5_in, 0_ft, 0_deg}}, "26half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {27_in, 0_ft, 0_deg}}, "27", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {27.5_in, 0_ft, 0_deg}}, "27half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {28_in, 0_ft, 0_deg}}, "28", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {28.5_in, 0_ft, 0_deg}}, "28half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {29_in, 0_ft, 0_deg}}, "29", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {29.5_in, 0_ft, 0_deg}}, "29half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {30_in, 0_ft, 0_deg}}, "30", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {30.5_in, 0_ft, 0_deg}}, "30half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {31_in, 0_ft, 0_deg}}, "31", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {31.5_in, 0_ft, 0_deg}}, "31half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {32_in, 0_ft, 0_deg}}, "32", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {32.5_in, 0_ft, 0_deg}}, "32half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {33_in, 0_ft, 0_deg}}, "33", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {33.5_in, 0_ft, 0_deg}}, "33half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {34_in, 0_ft, 0_deg}}, "34", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {34.5_in, 0_ft, 0_deg}}, "34half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {35_in, 0_ft, 0_deg}}, "35", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {35.5_in, 0_ft, 0_deg}}, "35half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {36_in, 0_ft, 0_deg}}, "36", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {36.5_in, 0_ft, 0_deg}}, "36half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {37_in, 0_ft, 0_deg}}, "37", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {37.5_in, 0_ft, 0_deg}}, "37half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {38_in, 0_ft, 0_deg}}, "38", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {38.5_in, 0_ft, 0_deg}}, "38half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {39_in, 0_ft, 0_deg}}, "39", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {39.5_in, 0_ft, 0_deg}}, "39half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {40_in, 0_ft, 0_deg}}, "40", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {40.5_in, 0_ft, 0_deg}}, "40half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {41_in, 0_ft, 0_deg}}, "41", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {41.5_in, 0_ft, 0_deg}}, "41half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {42_in, 0_ft, 0_deg}}, "42", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {42.5_in, 0_ft, 0_deg}}, "42half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {43_in, 0_ft, 0_deg}}, "43", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {43.5_in, 0_ft, 0_deg}}, "43half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {44_in, 0_ft, 0_deg}}, "44", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {44.5_in, 0_ft, 0_deg}}, "44half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {45_in, 0_ft, 0_deg}}, "45", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {45.5_in, 0_ft, 0_deg}}, "45half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {46_in, 0_ft, 0_deg}}, "46", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {46.5_in, 0_ft, 0_deg}}, "46half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {47_in, 0_ft, 0_deg}}, "47", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {47.5_in, 0_ft, 0_deg}}, "47half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {48_in, 0_ft, 0_deg}}, "48", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {48.5_in, 0_ft, 0_deg}}, "48half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {49_in, 0_ft, 0_deg}}, "49", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {49.5_in, 0_ft, 0_deg}}, "49half", {20, 2.5, 10});
	// profile->generatePath({{0_ft, 0_ft, 0_deg}, {50_in, 0_ft, 0_deg}}, "50", {20, 2.5, 10});
	 /*{
	pros::lcd::initialize();
	pros::lcd::set_text(1, "how's that 75 now?");
	masterController.setText(0,0,"  75 ");
	pros::delay(20);
}*/

//pros::lcd::initialize();

roller.setGearing(AbstractMotor::gearset::blue);
scorer.setGearing(AbstractMotor::gearset::blue);
intake.setGearing(AbstractMotor::gearset::green);
roller.setBrakeMode(AbstractMotor::brakeMode::coast);
//roller.setReversed(true);
pros::delay(20);
//displayInit(); //initializes the display, ask austin/ learn from display.hpp and display.cpp

displayInit();
	pros::delay(20);
		//masterController.rumble(" ... . ...- . -. - -.-- ..-. .. ...- ."); //75
		pros::delay(20);
//resets imu, waits for (time) until imu is finished reseting
imu->reset();
	const uint32_t calibrationStartTime = pros::millis();
	bool successfullyCalibrated = true;
	while(imu->is_calibrating()) {
		if (pros::millis()- calibrationStartTime > 6000) {
			successfullyCalibrated = false;
			break;
		}
	}
pros::delay(20);
optical.setLedPWM(100);
	}


	//pros::lcd::register_btn1_cb(on_center_button);


/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {

}
