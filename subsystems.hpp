#ifndef SUBSYSTEMS_H
#define SUBSYSTEMS_H
#define TRAY_TARGET 4000 // this is the highest tray position

#include "main.h"
#include "okapi/api.hpp"
#include "rotate.hpp"

extern okapi::MotorGroup leftDrive;
extern okapi::MotorGroup rightDrive;
extern okapi::Motor scorer;
extern okapi::MotorGroup intake;
extern okapi::Motor roller;
extern std::shared_ptr<okapi::Logger> logger;
extern std::shared_ptr<okapi::ChassisController> drive;
extern std::shared_ptr<okapi::AsyncMotionProfileController> profile;
extern std::shared_ptr<pros::Imu> imu;
extern okapi::OpticalSensor optical;
extern GyroRotateController gyroRotate;
extern okapi::Controller masterController;
extern std::shared_ptr<AsyncPositionController<double, double>> rollerController;
extern std::shared_ptr<AsyncPositionController<double, double>> intakeController;
extern std::shared_ptr<AsyncPositionController<double, double>> scorerController;

//std::int16_t traySpeed(int target = TRAY_TARGET);
//std::int16_t trayautoSpeed(int target = TRAY_TARGET);
//void stack(int target = TRAY_TARGET); //stack() is a function you can call during auton
//void flip();// flip is a function for auto
#endif
