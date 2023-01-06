#include <Servo.h>

Servo myServo;
int servoPin = 8;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  myServo.write(0);
  delay(2000);

  myServo.write(180);
  delay(2000);
}
