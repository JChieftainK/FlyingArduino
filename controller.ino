#include <Servo.h>
#include "Arduino.h"


//these pin numbers are not correct at the moment
const int leftMotorPin = 9;
const int rightMotorPin = 10;
const int doorMotorPin = 8;

//needs to still be callibrated
const int forwardSpeed = 1700;
const int backwardSpeed = 1200;
const int middleSpeed = 1500;

//tells us what angle of bank we are currently travling at.  
int bank = 0;

void setup(){
Motor motorRight(leftMotorPin);
Motor motorLeft(rightMotorPin);
Motor doorMotorPin(doorMotorPin);

}

void loop(){
 
}

//causes a motor to pull on its side of the canopy and open a flap
void openFlaps(Motor temp){
  temp.turnMotor(forwardSpeed);
  //delay is to make sure there is enough time for the function to be called
  //before the motor has to time to be set to middlespeed.
  delay(1);
  temp.turnMotor(middleSpeed);
}
//causes a motor to release tension and close a flap
void closeFlaps(Motor temp){
  temp.turnMotor(backwardSpeed);
  //delay is to make sure there is enough time for the function to be called
  //before the motor has to time to be set to middlespeed.
  delay(1);
  temp.turnMotor(middleSpeed); 
}
