int potPin = A0;
int ledPin = 9;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin);
  Serial.println(sensorValue);

  // analogWrite(ledPin, sensorValue / 4);

  int mapValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(ledPin, mapValue);

  delay(10);
}
