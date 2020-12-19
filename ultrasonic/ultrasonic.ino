const int TRIG_PIN = 10; // Declare pin 10 as trigger pin
const int ECHO_PIN = 9; // Declare pin 9 as echo pin

long duration; // Initialise variable to store duration of ultrasonic wave
int distance; // Initialise variable to store distance

void setup() {
  // put your setup code here, to run once:

  pinMode(TRIG_PIN, OUTPUT); // Sets the trigPin as Output
  pinMode(ECHO_PIN, INPUT); // Sets the echoPin as Input
  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(TRIG_PIN, LOW); // Reset the trigPin
  delayMicroseconds(2); // Sets the delay of 2 microseconds
  digitalWrite(TRIG_PIN, HIGH); // Sets the trigPin on HIGH state
  delayMicroseconds(10); // Sets the delay of 10 microseconds
  digitalWrite(TRIG_PIN, LOW); // Sets the trigPin on LOW state
  duration = pulseIn(ECHO_PIN, HIGH); // Reads the echoPin to know duration
  distance = duration*0.034/2; // Compute the distance using duration
  Serial.println("Distance: " + String(distance) + "\n"); // Serially print the distance
}
