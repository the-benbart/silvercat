/* DRIVERS for motor part*/
bridge enable pin for speed control
int speedPin = 10;
int motorAPin = 11; // H
void setup()
  {
    // set digital i/o pins as outputs:
    pinMode(speedPin, OUTPUT);
    pinMode(motorAPin, OUTPUT);
  }
