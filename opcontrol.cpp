#include "main.h"
#include "subsystems.hpp"
#include "okapi/api.hpp"
#include "display.hpp"
#include "rotate.hpp"
using namespace okapi;
bool bluePoop = true;
void opcontrol(){
	while(true){
		display();
		//pros::c::optical_set_led_pwm(6, 100);
		drive->getModel()->tank(masterController.getAnalog(ControllerAnalog::leftY), masterController.getAnalog(ControllerAnalog::rightY));
		drive->setMaxVelocity(200);
		drive->getModel()->setBrakeMode(AbstractMotor::brakeMode::brake);

	//intake
	if(masterController.getDigital(ControllerDigital::R1)){//r1 button intakes
	intake.moveVelocity(200);

}else if (masterController.getDigital(ControllerDigital::R2)){// r2 button extakes
	intake.moveVelocity(-200);
}else{//brake function to hold the intake in place
	intake.moveVelocity(0);
	intake.setBrakeMode(AbstractMotor::brakeMode::hold);
}
if(masterController.getDigital(ControllerDigital::L1)){
		roller.moveVelocity(600);
		scorer.moveVelocity(600);
	}
	else if(masterController.getDigital(ControllerDigital::L2)){
	roller.moveVelocity(-600);
	scorer.moveVelocity(-600);
}
else {
	scorer.moveVelocity(0);
	roller.moveVelocity(0);
}
// if (masterController.getDigital(ControllerDigital::L1)){
// 	roller.moveVelocity(400);
// 	scorer.moveVelocity(600);
// }
// else {
// 	roller.moveVelocity(0);
// 	scorer.moveVelocity(0);
// }

//tray position for towers




//SetCattemp() displays .getTemperature() value on screen(sometimes?)





}//end while
}//end void
