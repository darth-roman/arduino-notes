# Stepper Motor Notes
* Same concept as Servo motor
* 360deg rotation
* Stronger that Servo motor
* Needs a driver to function since Arduino cannot directly control it 

* 4 Pins:
    * 5 or 12V power supply (The one am using is 5V)
    * GND
    * Input 1
    * Input 2

* Methods used:
    * `Stepper(p1, p2, p3, p4)` : This creates a new instanace of the Stepper class
    * `setSpeed(rpms)`:  rpms stands for Rounds per minutes (**The one used here is only 16 max**)
    * `step(steps)` : This function turns the motor a specific number of steps. **This function is blocking** meaning it will wait until the motor has finished moving to pass control to the next line.
