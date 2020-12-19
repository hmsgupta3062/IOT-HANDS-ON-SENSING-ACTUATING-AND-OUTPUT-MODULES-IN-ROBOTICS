#include <Servo.h> // Include the servo library

Servo myservo; // Create a servo object
int pos = 0; // Declare a variable to store the servo position

void setup() {
  // put your setup code here, to run once:

  myservo.attach(2); // Attach the servo on pin 9 to the controller
}

void loop() {
  // put your main code here, to run repeatedly:

  for (pos = 0; pos <= 180; pos += 1) // Initialise a for loop to traverse through range 0-180 deg
  {
    myservo.write(pos); // Define the position at which the servo should go
    delay(15); // Waits for 15 microseconds for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) // Initialise a for loop to traverse through range 180-0 deg
  {
    myservo.write(pos); // Define the position at which the servo should go
    delay(15); // Waits for 15 microseconds for the servo to reach the position
  }
}
