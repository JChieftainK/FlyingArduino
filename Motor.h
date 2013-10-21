#ifndef motor_h
#define motor_h
#include <Servo.h>
#include "Arduino.h"

class Motor{
public:
 Motor(int pinIn);
 void turnMotor(int sp);
 void callibrate();
 private:
 int _pin;
 Servo _esc;
};
#endif
