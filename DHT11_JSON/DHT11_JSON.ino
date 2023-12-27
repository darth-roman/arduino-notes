#include <ArduinoJson.h>
#include <SD.h>
#include "DHT.h"

StaticJsonDocument<48> doc;

DHT dht(2, DHT11);

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2500);

  doc["sensor"] = "dht11";
  doc["h"] = dht.readHumidity();
  doc["t"] = dht.readTemperature();

  // Output the JSON to Serial
  serializeJsonPretty(doc, Serial);

  // Output the JSON to a text file
  // File file = SD.open("data.txt", FILE_WRITE);
  // Serial.println(file.);
  // serializeJsonPretty(doc, file);
  // file.close();

}
