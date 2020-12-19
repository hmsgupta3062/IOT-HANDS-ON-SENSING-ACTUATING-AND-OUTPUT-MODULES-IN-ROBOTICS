#define SENSOR_PIN 2 // Define variable to store sensor pin number
#define LED_PIN LED_BUILTIN // Define variable to store builtin LED pin number

void setup() {
  // put your setup code here, to run once:

  pinMode(SENSOR_PIN, INPUT_PULLUP); // Sets the SENSOR_PIN as input
  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
  }

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(SENSOR_PIN) == LOW) // Check if the sensor value is LOW
  {
    // Block of code executed if above condition is true
    digitalWrite(LED_PIN, HIGH); // Sets the LED on HIGH state
  }
  else
  {
    // Else the following block of code is executed
    digitalWrite(LED_PIN, LOW); // Sets the LED on LOW state
  }
  delay(20); // Wait for 20 milliseconds before accessing the sensor again 
}
