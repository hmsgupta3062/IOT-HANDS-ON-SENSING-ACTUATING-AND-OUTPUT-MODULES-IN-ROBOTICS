/*
const int buzzerPin = 13;
const int flamePin = 11;
int Flame = HIGH;

void setup() 
{
  pinMode(buzzerPin, OUTPUT);
  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  Flame = digitalRead(flamePin);
  if (Flame== LOW)
  {
    Serial.println("Fire!!!");
    digitalWrite(buzzerPin, HIGH);
  }
  else
  {
    Serial.println("No worries");
    digitalWrite(buzzerPin, LOW);
  }
}
*/
// lowest and highest sensor readings:
#define SENSOR_PIN A0 // Define variable to store sensor pin number
#define LED_PIN LED_BUILTIN // Define variable to store builtin LED pin number

const int sensorMin = 0; // minimum analog value
const int sensorMax = 1023; // maximum analog value
int sensorReading = 0; // Declare variable to store analog sensor value
int range = 0; // Declare variable to comput range of distance

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
  pinMode(SENSOR_PIN, INPUT); // Sets the SENSOR_PIN as input
  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
}
void loop() {
  // put your main code here, to run repeatedly:
  
  sensorReading = analogRead(SENSOR_PIN); // Reads the analog value of the sensor
  range = map(sensorReading, sensorMin, sensorMax, 0, 2); // Maps the sensor value in range of 0-2
  switch (range) { // Check for the different values of range to perform different operations for different values of range
  case 0: // The flame is closer than 1.5 feet
  {
    Serial.println("*** Close Fire ***"); // Serially print the status
    led_blink(100); // Go to the function led_blink
    break; // Break to the main function
  }
  case 1: // The flame is between 1-3 feet away
  {
    Serial.println("*** Distant Fire ***"); // Serially print the status
    led_blink(500); // Go to the function led_blink
    break; // Break to the main function
  }
  case 2: // The flame is not detected
  {
    Serial.println("No Fire"); // Serially print the status
    break; // Break to the main function
  }
  }
  delay(20); // Wait for 20 milliseconds before accessing the sensor again 
}

void led_blink(int amount) {
  digitalWrite(LED_PIN, 1); // Sets the state of LED_PIN HIGH
  delay(amount); // Waits for 'amount' milliseconds
  digitalWrite(LED_PIN, 0); // Sets the state of LED_PIN LOW
  delay(amount); // Waits for 'amount' milliseconds
  digitalWrite(LED_PIN, 1); // Sets the state of LED_PIN HIGH
  delay(amount); // Waits for 'amount' milliseconds
  digitalWrite(LED_PIN, 0); // Sets the state of LED_PIN LOW
  delay(amount); // Waits for 'amount' milliseconds
}
