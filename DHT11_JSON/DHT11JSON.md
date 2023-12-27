# Using ArduinoJSON Library
In this document, I am using a new library called ArduinoJSON[^1] to save the data coming from a **DHT11** sensor to a **JSON file**.

I also used the same code from a previous learning code from this same repo[^2]

## Steps to make this shit happen:
+ Install the library from the libraries manager `Tools > Manage Libraries ...`
+ include the library in your code: `#inlcude <ArduinoJson.h>`
+ Declate the document/Json Object through `StaticJsonDocument<48> doc;`
+ Set some variables to include in the document `doc["varName1"] = value1 ...`
+ Use an serialization/outputting function, ex: `serializeJsonPretty(doc, Serial);`, this will output your JSON object in Serial in a pretty way

Here is the final code:
``` cpp

#include <ArduinoJson.h>
#include "DHT.h"

StaticJsonDocument<48> doc;

DHT dht(2, DHT11);

void setup() {
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  delay(2500);

  doc["sensor"] = "dht11";
  doc["humidity"] = dht.readHumidity(); // the DHT11 is reading the value of humidity and setting it to the doc humidity field.
  doc["temp"] = dht.readTemperature();  // the DHT11 is reading the value of temperature and setting it to the doc temp field.

  // Output the JSON to Serial
    serializeJsonPretty(doc, Serial); // Where the magic appears lol, i said appears, not happens.
}

```

As for my second steps, I am trying to save all this crap to an actual file, but apparently it is impossible for the moment.
I would have to use an SD card and print it to a file and save it to the file, but, fuck it, i will do it later when i get a SD card module.
The main goal of all of this is still not achieved though, yet, it is approched be reached? i honestly don't know lol :shrug:


[^1]: https://arduinojson.org
[^2]: [DHT11/Humid](../Humid/Humid.ino)