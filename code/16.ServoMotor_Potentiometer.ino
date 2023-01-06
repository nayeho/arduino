#include <Servo.h>

Servo myServo;
int servoPin = 8;
int potPin = A0;

void setup() {
  myServo.attach(servoPin);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin);
  Serial.println(sensorValue);

  int mapValue = map(sensorValue, 0, 1023, 0, 180);

  myServo.write(mapValue);
  delay(10);
}
