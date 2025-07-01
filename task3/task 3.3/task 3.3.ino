
#include <Stepper.h>
const int stepsPerRevolution = 200; 
const int numberofrotations = 10;
const int direction = -1;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
void setup() {
myStepper.setSpeed(60);
}
void loop() {
  myStepper.step(stepsPerRevolution*direction*numberofrotations);
  delay(1000);
  myStepper.step(-stepsPerRevolution*direction*numberofrotations);
  delay(1000);
}