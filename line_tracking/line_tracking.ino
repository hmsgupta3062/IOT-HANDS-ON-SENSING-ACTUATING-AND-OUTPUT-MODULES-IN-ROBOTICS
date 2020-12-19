#define SENSOR_PIN A0 // Define variable to store sensor pin number
#define LED_PIN LED_BUILTIN // Define variable to store builtin LED pin number

int sensorValue = 0; // variable to store the analog value of the sensor
 
void setup () {
  // put your setup code here, to run once:

  pinMode(SENSOR_PIN, INPUT); // Sets the SENSOR_PIN as Input
  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
}
 
void loop () {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(SENSOR_PIN); // Reads the analog value of the sensor
  Serial.println(sensorValue, DEC); // Serially print the analog value of the sensor
  if(sensorValue <= 100) // Check if the sensor value is below or equal to the threshold
  {
    digitalWrite (LED_PIN, HIGH); // Sets the LED on HIGH state
    delay(1000); // Waits for 1000 milliseconds
  }
  digitalWrite(LED_PIN, LOW); // Sets the LED on LOW state
}
