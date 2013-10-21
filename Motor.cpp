#include <Servo.h>
#include "Motor.h"
#include "Arduino.h"

Motor::Motor(int pinIn)
{
  _pin = pinIn;
  _esc.attach(_pin);
}
void Motor::turnMotor(int sp){
  _esc.writeMicroseconds(sp);
}
/*void Motor::calibrate(){
  for(int i = 0;i<count;i++){
    
    
  }
 }
  
 */
  
