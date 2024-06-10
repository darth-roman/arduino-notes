#include "DHT.h"

DHT dht(14, DHT11);
void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Water Sensor: ");
  waterSensoring(4, 1000);
  Serial.println("DHT:");
  DHTSensoring(3000);
}

// Water level sensor / Rain sensor 
void waterSensoring(int pin, int dTime){
  int sensorValue = analogRead(pin);
  Serial.print(sensorValue);
  delay(dTime);
}

void DHTSensoring(int dTime){
  delay(dTime);

  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.println();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C");
  Serial.println();
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %");
  Serial.println();
}