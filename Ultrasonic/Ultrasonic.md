# Ultrasonic Sensor Notes
I am using the HC-SR04 Ultrasonic sensor.
We can use this sensor in many projects, especially the ones related to distance measuring, 

<img src="img/image10.png" width="500">

+ 4 Pins
    * 1 GND, 1 VCC (5V)
    * Echo and Trig pins


* Functions used:
    * `pulseIn(int, int)`: this would calculate the time between two states (High and Low)
    * `delayMicroseconds(int)`: same as delay but just in microseconds

### How to use this sensor?
1. This sensor has two sides, a transmitter and a receiver. The transmitter sends some ultrasonic waves and the receiver of course receives them back.
2. The receiver recives the waves bouncing back from the nearest object to it.
3. The waves travel in the speed of sound, and through the basic equation we all know: `speed = distance / time` we can basically find the `distance`.
4. `distance = speed*time` , `speed` is the speed of sound which equals in ms `0.343`.
5. We have to divide the `distance` by 2 since the sound travels from the transmitter AND GOES BACK to the receiver.
6. Therefore the `distance = (duration*0.343)/2`.
7. And like that, you can reveive the distance of the objects facing the sensor.


The final circuit: 
<img src="img/image1457.png" width="600">

