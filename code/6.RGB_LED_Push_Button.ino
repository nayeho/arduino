void setup() {
  pinMode(13, OUTPUT);  // Red
  pinMode(12, OUTPUT);  // Blue
  pinMode(11, OUTPUT);  // Green
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState1 = digitalRead(2);
  int buttonState2 = digitalRead(3);
  int buttonState3 = digitalRead(4);

  Serial.print(buttonState1);
  Serial.print(" ");
  Serial.print(buttonState2);
  Serial.print(" ");
  Serial.println(buttonState3);

  digitalWrite(13, buttonState1);
  digitalWrite(12, buttonState2);
  digitalWrite(11, buttonState3);
}
