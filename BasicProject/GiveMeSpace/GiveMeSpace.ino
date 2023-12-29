int trigPin = 9;
int echoPin = 10;
int buzzerPin = 3;

float duration, distance;


void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


  duration = pulseIn(echoPin, HIGH);

  distance = (duration*0.343)/2;

  if(distance < 100.0){
    digitalWrite(buzzerPin, HIGH);
    Serial.println(distance);
  }else{
    digitalWrite(buzzerPin, LOW);
    Serial.println(distance);
  }

  delay(1000);

}
