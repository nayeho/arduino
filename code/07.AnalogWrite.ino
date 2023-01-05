int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, 0);
  delay(1000);

  analogWrite(ledPin, 127);
  delay(1000);

  analogWrite(ledPin, 255);
  delay(1000);
}
