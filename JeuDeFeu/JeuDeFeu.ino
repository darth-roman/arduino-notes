int greenPin = 3;
int yellowPin = 5;
int redPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenPin, HIGH);
  delay(2000);

  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(500);

  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(2500);
  digitalWrite(redPin, LOW);
}
