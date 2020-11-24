 #include "okapi/api.hpp"
#include "main.h"
#include "rotate.hpp"
#include "subsystems.hpp"
using namespace std;
const AbstractMotor::gearset chassisGearset = AbstractMotor::gearset::green;



shared_ptr<okapi::Logger> logger =
std::make_shared<Logger>(TimeUtilFactory::createDefault().getTimer(), "ser/sout", Logger::LogLevel::debug);
MotorGroup leftDrive({3,-4});
MotorGroup rightDrive({-1,2});

  /*void flip() { //flip(); is a function to call during auton or a button press
  adjuster.moveVelocity(200);
  pros::delay(380);
  adjuster.moveVelocity(0);
  pros::delay(10);
  lift.moveVelocity(200);
  pros::delay(1100);
  lift.moveVelocity(-125);
  pros::delay(200);
  lift.moveVelocity(0);
  adjuster.moveVelocity(-200);
  pros::delay(800);
  adjuster.moveVelocity(0);

}*/
std::shared_ptr<ChassisController> drive =
ChassisControllerBuilder()
.withMotors(leftDrive,rightDrive)
.withDimensions(AbstractMotor::gearset::green, {{3.75_in, 14_in}, imev5GreenTPR})//.withLogger(logger).
.build();
Controller masterController;
Motor roller(-11);
Motor scorer(5);
MotorGroup intake({12,-13});

std::shared_ptr<AsyncMotionProfileController> profile =
  AsyncMotionProfileControllerBuilder()
    .withLimits({
      20, //Maximum Linear Velocity of the chassis in m/s
      2.5, //Maximum linear acceleration in m/s/s
      20.0 //Maximum Linear jerk in m/s/s/s
    })
    .withOutput(drive)
    .buildMotionProfileController();


shared_ptr<AsyncPositionController<double, double>> scorerController =
AsyncPosControllerBuilder().withMotor(scorer).withMaxVelocity(600).withLogger(logger).build();

shared_ptr<AsyncPositionController<double, double>> intakeController =
AsyncPosControllerBuilder().withMotor(intake).withMaxVelocity(200).withLogger(logger).build();

std::shared_ptr<AsyncPositionController<double, double>> rollerController =
AsyncPosControllerBuilder().withMotor(roller).withMaxVelocity(600).withLogger(logger).build();

//PID Controllers for gyro rotates
const double kP = 0.021;//increase until oscilates 0.011
const double kI = 0.01;//increase to desired number of oscillations before finding target. 0.005
const double kD = 0.25/1000;//increase until it steadily finds target 0.00025
IterativePosPIDController RotateController = IterativeControllerFactory::posPID( kP,  kI, kD);
okapi::SettledUtil rotateSettledUtil(TimeUtilFactory::createDefault().getTimer(), 1, 5, 250_ms);

std::shared_ptr<pros::Imu> imu = std::make_shared<pros::Imu>(14);
std::shared_ptr<RotateControllerInput> gyroInput = std::make_shared<RotateControllerInput>(imu);
std::shared_ptr<RotateControllerOutput> rotateOutput = std::make_shared<RotateControllerOutput>(drive->getModel());

GyroRotateController gyroRotate(gyroInput, rotateOutput);

OpticalSensor optical (16, OpticalSensorOutput::hue, true);
//motion profiling for tray up
//std::int16_t traySpeed(int target) {

/*float startingAcceleration = 0.8;
std::int16_t outputSpeed = 0;
int acceleration = 15;
std::int16_t endSpeed = sqrt(-acceleration*(adjuster.getPosition()-target));

float inverseEndSpeed = -((pow(200,2)-acceleration*target)/acceleration);
float startSpeed = startingAcceleration*adjuster.getPosition()+50;

outputSpeed = endSpeed;
if (outputSpeed > 150) {
  return 150;
}
else if (outputSpeed < -200) {
  return -200;
} else{
  return outputSpeed;
}

}
*/
//auton tray speed
/*std::int16_t trayautoSpeed(int target) {

float startingAcceleration = 0.8;
std::int16_t outputSpeed = 0;
int acceleration = 6;
std::int16_t endSpeed = sqrt(-acceleration*(adjuster.getPosition()-target));

float inverseEndSpeed = -((pow(200,2)-acceleration*target)/acceleration);
float startSpeed = startingAcceleration*adjuster.getPosition()+50;*/
