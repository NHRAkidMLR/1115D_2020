#include "autoPrograms.hpp"
#include "okapi/api.hpp"
#include "rotate.hpp"
#include "subsystems.hpp"
using namespace okapi;
double balls;
int targ;

void intakeBalls (int targ){
  intake.moveRelative(targ, 200);
}

void score(double balls){
  roller.moveRelative(1900*balls, 200);
  scorer.moveRelative(1900*balls, 600);
}

void gyroTest (void){
  gyroRotate.tareHeading();
	gyroRotate.rotateAbsolute(90);
}

void odomTest(void){
  drive->moveDistance(3_in);
}

void left1(void){ //Left Side 1 Goal
  gyroRotate.tareHeading();

  scorer.moveRelative(450, 600);
  profile->setTarget("leftA", false);
  profile->waitUntilSettled();
  gyroRotate.rotateAbsolute(-140, true);
  intake.moveRelative(8000, 200);
  profile->setTarget("leftB", false);
  profile->waitUntilSettled();
  score(2.7);
  pros::delay(2000);
  profile->setTarget("leftC", true);
  profile->waitUntilSettled();
  score(3);
  pros::delay(500);
}

void left2(void){ //Left Side 2 Goal
left1();
gyroRotate.rotateAbsolute(-270);
profile->setTarget("leftD", false);
profile->waitUntilSettled();
gyroRotate.rotateAbsolute(-180);
profile->setTarget("leftE", false);
profile->waitUntilSettled();
intake.moveRelative(5000, 200);
score(3);
pros::delay(2300);
profile->setTarget("leftF", true);
profile->waitUntilSettled();
}

void right1(void){ //Right Side 1 Goal
  gyroRotate.tareHeading();

  scorer.moveRelative(450, 600);
  profile->setTarget("rightA", false);
  profile->waitUntilSettled();
  gyroRotate.rotateAbsolute(138, true);
  intake.moveRelative(8000, 200);
  profile->setTarget("rightB", false);
  profile->waitUntilSettled();
  score(2.7);
  pros::delay(2000);
  profile->setTarget("rightC", true);
  profile->waitUntilSettled();
  score(3);
  pros::delay(500);
}

void right2(void){ //Right Side 2 Goal
  right1();
  gyroRotate.rotateAbsolute(270);
  profile->setTarget("rightD", false);
  profile->waitUntilSettled();
  gyroRotate.rotateAbsolute(180);
  profile->setTarget("rightE", false);
  profile->waitUntilSettled();
  intake.moveRelative(5000, 200);
  score(3);
  pros::delay(2300);
  profile->setTarget("rightF", true);
  profile->waitUntilSettled();
}

void skills(void){ //Start Left middle Square
  gyroRotate.tareHeading();

  intake.moveRelative(3000, 200);
  scorer.moveRelative(450, 600);
  profile->setTarget("25", false);
  profile->waitUntilSettled();
}
