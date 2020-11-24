#include "main.h"
#include "subsystems.hpp"
#include "okapi/api.hpp"
#include "autoPrograms.hpp"
#include "display.hpp"


using namespace okapi;
//running a function here run them during auton
//runSelectedAuto(); is a function that lets you pick an auton on the brain screen
//autons are in autoPrograms.cpp
//display.cpp lets you change the name of autons and what "autons"(functions) are run during match autons
void autonomous() {
gyroTest();
//left1();
//left2();
//right1();
//right2();
//skills();
//runSelectedAuto();
}
