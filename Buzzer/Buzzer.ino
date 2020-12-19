#define buzzer 10 // Define variable to store the buzzer pin number

void setup() {
  // put your setup code here, to run once:
  
  pinMode(buzzer, OUTPUT); // Initialize pin 10 as output
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(buzzer, HIGH); // Set the LED at HIGH state
  delay(1000); // Wait for 1 second
  digitalWrite(buzzer, LOW); // Set the LED at LOW state
  delay(1000); // Wait for 1 second
}
