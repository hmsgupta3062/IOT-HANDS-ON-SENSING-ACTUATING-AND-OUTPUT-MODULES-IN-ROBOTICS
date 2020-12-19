#define SENSOR_PIN 2 // Define variable to store sensor pin number
#define LED_PIN LED_BUILTIN // Define variable to store builtin LED pin number

int present_condition = 0; // Initialise variable to store present state
int previous_condition = 0; // Initialise variable to store past state

void setup() {
  // put your setup code here, to run once:

  pinMode(SENSOR_PIN, INPUT); // Sets the SENSOR_PIN as Input
  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
}

void loop() {
  // put your main code here, to run repeatedly:

  previous_condition = present_condition; // Set the past state equal to present state
  present_condition = digitalRead(SENSOR_PIN); // Read the state of sensor pin
  if (previous_condition != present_condition) // Check if the previous_condition is different from present_condition
  {
    // Block of code executed if above condition is true
    led_blink(); // Go to the function led_blink
  }
  else 
  {
    // Else the following block of code is executed
    digitalWrite(LED_PIN, 0); // Sets the state of LED_PIN LOW
  }
}

void led_blink(void) {
  digitalWrite(LED_PIN, 1); // Sets the state of LED_PIN HIGH
  delay(250); // Waits for 250 milliseconds
  digitalWrite(LED_PIN, 0); // Sets the state of LED_PIN LOW
  delay(250); // Waits for 250 milliseconds
  digitalWrite(LED_PIN, 1); // Sets the state of LED_PIN HIGH
  delay(250); // Waits for 250 milliseconds
  digitalWrite(LED_PIN, 0); // Sets the state of LED_PIN LOW
  delay(250); // Waits for 250 milliseconds
}
