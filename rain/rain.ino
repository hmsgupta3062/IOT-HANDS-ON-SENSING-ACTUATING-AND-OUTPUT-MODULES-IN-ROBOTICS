const int capture_D = 2;
const int capture_A = A0;

int val_analog;

void setup() {
  // put your setup code here, to run once:

  pinMode(capture_D, INPUT); // Sets the capteur_D pin as Input
  pinMode(capture_A, INPUT); // Sets the capteur_A pin as Input
  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(capture_D) == LOW) // Check if the sensor digital value is LOW
  {
    // Block of code executed if above condition is true
    Serial.println("Digital value : wet"); // Serially print the status
    delay(10); // Waits for 10 milliseconds
  }
  else
  {
    // Else the following block of code is executed
    Serial.println("Digital value : dry"); // Serially print the status
    delay(10); // Waits for 10 milliseconds
  }
  val_analog = analogRead(capture_A); // Reads the analog value of the sensor
  Serial.println("Analog value : " + String(val_analog) + "\n"); // Serially print the analog value of the sensor
  delay(1000); // Wait for 1000 milliseconds before accessing the sensor again 
}
