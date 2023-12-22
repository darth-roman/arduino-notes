int greenPin = 3;
int yellowPin = 5;
int redPin = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);

  analogWrite(greenPin, 50);
  analogWrite(yellowPin, 10);
  analogWrite(redPin, 150);


}

void loop() {
  // put your main code here, to run repeatedly:
}
