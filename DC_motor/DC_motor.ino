void setup() {
  // put your setup code here, to run once:
  
  pinMode(2, OUTPUT); // Initialize pin 2 as output
  pinMode(3, OUTPUT); // Initialize pin 3 as output
  digitalWrite(2, LOW); // Set the digital pin 2 as LOW initially
  digitalWrite(3, LOW); // Set the digital pin 2 as LOW initially
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(3, HIGH); // Set the digital pin 2 in HIGH state
  delay(3000); // Waits for 3000 microseconds
  digitalWrite(3, LOW); // Set the digital pin 2 in LOW state
  delay(1500); // Waits for 1500 microseconds
}
