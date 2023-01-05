int ledRed = 13;
int ledBlue = 12;
int ledGreen = 11;
int btn1 = 2;
int btn2 = 3;
int btn3 = 4;

void setup() {
  pinMode(ledRed, OUTPUT);  // Red
  pinMode(ledBlue, OUTPUT);  // Blue
  pinMode(ledGreen, OUTPUT);  // Green
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
  Serial.begin(9600);
}

void loop() {
  int btnState1 = digitalRead(btn1);
  int btnState2 = digitalRead(btn2);
  int btnState3 = digitalRead(btn3);

  Serial.print(btnState1);
  Serial.print(" ");
  Serial.print(btnState2);
  Serial.print(" ");
  Serial.println(btnState3);
  
  if(btnState1 == 1){
    digitalWrite(ledRed, 1);
  }else{
    digitalWrite(ledRed, 0);
  }  
  if(btnState2 == 1){
    digitalWrite(ledBlue, 1);
  }else{
    digitalWrite(ledBlue, 0);
  }  
  if(btnState3 == 1){
    digitalWrite(ledGreen, 1);
  }else{
    digitalWrite(ledGreen, 0);
  }

//   digitalWrite(ledRed, buttonState1);
//   digitalWrite(ledBlue, buttonState2);
//   digitalWrite(ledGreen, buttonState3);
}
