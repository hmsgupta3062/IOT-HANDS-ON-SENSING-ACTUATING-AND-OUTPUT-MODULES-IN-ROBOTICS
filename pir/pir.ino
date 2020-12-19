#define SENSOR_PIN 2 // Define variable to store sensor pin number
#define LED_PIN LED_BUILTIN // Define variable to store builtin LED pin number

int sensor_val = 0; // variable to store the sensor value

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
  pinMode(SENSOR_PIN, INPUT); // Sets the SENSOR_PIN as input
  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
}

void loop(){
  // put your main code here, to run repeatedly:

  sensor_val = digitalRead(SENSOR_PIN); // Read the state of sensor pin
  if (sensor_val == HIGH) // Check if the sensor value is HIGH
  {
    // Block of code executed if above condition is true
    digitalWrite(LED_PIN, HIGH); // Sets the LED on HIGH state
    delay(100); // Waits for 100 milliseconds
    Serial.println("Motion detected!"); // Serially print the status
  }
  else 
  {
    // Else the following block of code is executed
    digitalWrite(LED_PIN, LOW); // Sets the LED on HIGH state
    delay(200); // Waits for 200 milliseconds
    Serial.println("Motion stopped!"); // Serially print the status
  }
  delay(1000); // Wait for 1000 milliseconds before accessing the sensor again 
}
