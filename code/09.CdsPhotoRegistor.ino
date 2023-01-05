int cdsPin = A0;

void setup() {
  pinMode(cdsPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(cdsPin);
  Serial.println(sensorValue);
  delay(10);
}
