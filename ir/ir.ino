/*
const int ProxSensor=2;
int inputVal = 0;

void setup() 
{                
  pinMode(13, OUTPUT);          // Pin 13 has an LED connected on most Arduino boards:  
  pinMode(ProxSensor,INPUT);    //Pin 2 is connected to the output of proximity sensor
  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(ProxSensor)==HIGH)      //Check the sensor output
  {
    digitalWrite(13, HIGH);   // set the LED on
  }
  else
  {
    digitalWrite(13, LOW);    // set the LED off
  }
inputVal = digitalRead(ProxSensor);
Serial.println(inputVal);
delay(1000);              // wait for a second
}
*/
#define sensor_pin A0 // Analog Pin at which the sensor is connected
#define led_pin LED_BUILTIN
int inputVal = 0; // Declare a variable to store analog sensor value

void setup() {
  // put your setup code here, to run once:
                
  pinMode(led_pin, OUTPUT); // Initialise Pin led_pin as Output
  pinMode(sensor_pin, INPUT); // Initialise Pin sensor_pin as Output
  Serial.begin(9600); // Initialize the serial port at baud rate of 9600
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(sensor_pin) == HIGH) //Check if the digital output of the sensor is HIGH
  {
    // Block of code executed if the above condition is true
    digitalWrite(led_pin, HIGH); // Set the led_pin in HIGH state
  }
  else
  {
    // Else the following block of code is executed
    digitalWrite(led_pin, LOW); // Set the led_pin in LOW state
  }
  inputVal = analogRead(sensor_pin); // Read the analog sensor value
  Serial.println(inputVal); // Serially print the analog sensor value
  delay(1000); // Wait for 1 second before accessing the sensor again
}
