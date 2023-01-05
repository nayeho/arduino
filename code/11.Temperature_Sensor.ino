int tempPin = A0;

void setup() {
  pinMode(tempPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(tempPin);
  float voltage = sensorValue / 1024.0 * 5.0;
  float temperature = (voltage - 0.5) * 100;
  Serial.print("degrees : ");
  Serial.println(temperature);
  delay(100);
}
