void setup() {
  pinMode(13, OUTPUT); // Red
  pinMode(12, OUTPUT); // Blue
  pinMode(11, OUTPUT); // Green
}

void loop() {
  digitalWrite(13, HIGH); // Red On
  digitalWrite(12, LOW); // Blue Off
  digitalWrite(11, LOW); // Green Off
}
