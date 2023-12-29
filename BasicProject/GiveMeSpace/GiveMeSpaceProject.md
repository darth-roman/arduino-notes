# Give Me Space
This is a simple project using two cute components, which are the Ultrasonic sensor and the Piezo buzzer

The logic is very simple, it uses the Ultrasonic sensor to calculate the distance from the facing object, if it is less than 10cm (100mm)
it starts screaming lol

```cpp
    float distance = (duration*0.343)/2;

    if(distance < 100.0){
        digitalWrite(buzzerPin, HIGH);
        Serial.println(distance);
    }else{
        digitalWrite(buzzerPin, LOW);
        Serial.println(distance);
    }

```
Link to code: [Trust me, I am a Link lol](GiveMeSpace.ino)
Tadaaaaaa...