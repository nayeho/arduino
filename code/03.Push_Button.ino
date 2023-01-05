void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(2);
  Serial.println(buttonState);
  delay(10);
}
