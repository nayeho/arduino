void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(2);
  int buttonState2 = digitalRead(3);
  Serial.print(buttonState);
  Serial.print(" ");
  Serail.println(buttonState2)
  digitalWrite(13, buttonState);
  digitalWrite(12, buttonState2);

  delay(10);
}
