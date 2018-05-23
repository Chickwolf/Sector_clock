#include <Stepper.h>

const int stepsPerRevolution = 200;

Stepper secondsStepper(stepsPerRevolution, 7, 8, 9, 10);
Stepper minutesStepper(stepsPerRevolution, 3, 4, 5, 6);

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  secondsStepper.step(1);
  minutesStepper.step(1);
  delay(25);
}

