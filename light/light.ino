#define SENSOR_PIN A0 // Define variable to store sensor pin number
#define LED_PIN LED_BUILTIN // Define variable to store builtin LED pin number

int sensorValue = 0; // Declare variable to store the analog sensor value

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
  pinMode(SENSOR_PIN, INPUT); // Sets the SENSOR_PIN as input
  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  
  sensorValue = analogRead(SENSOR_PIN); // Reads the analog value of the sensor
  int Value = map(sensorValue, 0, 1023, 255, 100); // Maps the sensorValue into range 255-100
  analogWrite(LED_PIN, Value); // Sets the PWM signal with 'Value' duty cycle
  delay(1000); // Waits for 1 second before accessing the sensor again
}


/*void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}*/
