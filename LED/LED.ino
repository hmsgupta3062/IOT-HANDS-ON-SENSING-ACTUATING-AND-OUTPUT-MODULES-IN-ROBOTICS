void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT); // Initialize digital pin LED_BUILTIN as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(LED_BUILTIN, HIGH); // Set the LED at HIGH state
  delay(1000); // Wait for 1 second
  digitalWrite(LED_BUILTIN, LOW); // Set the LED at LOW state
  delay(1000); // Wait for 1 second
}
