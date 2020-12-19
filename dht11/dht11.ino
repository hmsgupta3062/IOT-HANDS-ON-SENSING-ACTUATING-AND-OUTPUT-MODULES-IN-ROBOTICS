#include "dht.h" // Include the dht library
#define DHT_PIN A0 // Analog Pin at which the sensor is connected

dht dht; // Declare a object of class dht

void setup(){
  // put your setup code here, to run once:
  
  Serial.begin(9600); // Initialize the serial port at baud rate of 9600
  pinMode(DHT_PIN, INPUT); // Sets the DHT_PIN as Input
}
 
void loop(){
  // put your main code here, to run repeatedly:
  
  dht.read11(DHT_PIN); // Read the value of DHT11 at A0
  Serial.println("Humidity = " + String(dht.humidity) + "%\nTemperature = " + String(dht.temperature) + " DegC\n"); // Print the result on serial monitor
  delay(1000); // Wait for 1 second before accessing the sensor again 
}
