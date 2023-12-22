int buzzerPin = 3;
int btnPin = 2;
int readValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  pinMode(btnPin, INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = digitalRead(btnPin);
  if (readValue == 0) {
    digitalWrite(buzzerPin, HIGH);
  }else{
      digitalWrite(buzzerPin, LOW);
  }
}
