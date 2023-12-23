#include <Stepper.h>

Stepper stepper(2048, 8, 10, 9, 11);

void setup() {
  // put your setup code here, to run once:
  stepper.setSpeed(10);
  stepper.step(-1024);
}

void loop() {
  // put your main code here, to run repeatedly:
  stepper.step(2048);
  delay(1000);
  stepper.step(-1000);
  delay(1000);
}
