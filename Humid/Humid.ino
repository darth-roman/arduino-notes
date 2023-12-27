#include "DHT.h"

DHT dht(2, DHT11);
void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2500);
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
}
