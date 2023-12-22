int readPin = A3;
int readValue;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(readPin);
  Serial.println(readValue);
}
