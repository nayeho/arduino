int cdsPin = A0;
int ledPin = 13;

void setup() {
  pinMode(cdsPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(cdsPin);
  Serial.println(sensorValue);

  if(sensorValue <= 600){
    digitalWrite(ledPin, 1);
  }else{
    digitalWrite(ledPin, 0);
  }

  delay(10);
}
