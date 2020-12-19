/*
#include <MQ2.h>
int Analog_Input = A0;
int lpg, co, smoke;

MQ2 mq2(Analog_Input);

void setup(){
  Serial.begin(9600);
  mq2.begin();
}
void loop(){
  float* values= mq2.read(true); //set it false if you don't want to print the values in the Serial
  //lpg = values[0];
  lpg = mq2.readLPG();
  //co = values[1];
  co = mq2.readCO();
  //smoke = values[2];
  smoke = mq2.readSmoke();
  Serial.println("*************");
  Serial.print("LPG:");
  Serial.println(lpg);
  Serial.print(" CO:");
  Serial.println(co);
  Serial.print("SMOKE:");
  Serial.print(smoke);
  Serial.println(" PPM");
  Serial.println("*************");
  delay(1000);
}
*/



/*
#include <MQUnifiedsensor.h>

//Definitions
#define pin A0 //Analog input 0 of your arduino
#define typee 2 //MQ2
//#define calibration_button 13 //Pin to calibrate your sensor

//Declare Sensor
MQUnifiedsensor MQ2(pin, typee);

//Variables
String H2, LPG, CO, Alcohol, Propane, Benzene;

void setup() {
  Serial.begin(9600); //Init serial port 
  //init the sensor
  MQ2.inicializar(); 
  //pinMode(calibration_button, INPUT);
}

  void loop() {
  MQ2.update(); // Update data, the arduino will be read the voltaje in the analog pin
   
  //Read the sensor and print in serial port
  //Lecture will be saved in lecture variable
  //float lecture =  MQ2.readSensor("", true); // Return LPG concentration
  // Options, uncomment where you need
//  H2 =  MQ2.readSensor("H2"); // Return H2 concentration
  LPG =  MQ2.readSensor(); // Return LPG concentration
//  CO =  MQ2.readSensor("CO"); // Return CO concentration
//  Alcohol =  MQ2.readSensor("Alcohol"); // Return Alcohol concentration
//  Propane =  MQ2.readSensor("Propane"); // Return Propane concentration
//  
//  Serial.println("***************************");
//  Serial.println("Lectures for MQ-2");
//  Serial.print("Volt: ");Serial.print(MQ2.getVoltage(false));Serial.println(" V"); 
//  Serial.print("R0: ");Serial.print(MQ2.getR0());Serial.println(" Ohm"); 
//  Serial.print("H2: ");Serial.print(H2,2);Serial.println(" ppm");
//  Serial.print("LPG: ");Serial.print(LPG,2);Serial.println(" ppm");
//  Serial.print("CO: ");Serial.print(CO,2);Serial.println(" ppm");
//  Serial.print("Alcohol: ");Serial.print(Alcohol,2);Serial.println(" ppm");
//  Serial.print("Propane: ");Serial.print(Propane,2);Serial.println(" ppm");
//  Serial.println("***************************");
}

*/


/*
#include <MQUnifiedsensor.h>

//Definitions
#define pin A0 //Analog input 0 of your arduino
#define type 2 //MQ2

//Declare Sensor2
MQUnifiedsensor MQ2(pin, type);

void setup() {
  //Init serial port
  Serial.begin(115200);
  //init the sensor
  MQ2.inicializar(); 
}

  void loop() {
  //Read the sensor and print in serial port
  //Lecture will be saved in lecture variable
  int lecture =  MQ2.readSensor("smoke"); // Return smoke concentration
  Serial.print("MQ2 smoke ppm lecture: ");
  Serial.print(lecture);
  Serial.println(" ppm");
  delay(400);
}
*/
//const int gasPin = A0; //GAS sensor output pin to Arduino analog A0 pin
//
//void setup()
//{
//  Serial.begin(9600); //Initialize serial port - 9600 bps
//}
//
//void loop()
//{
//  Serial.println(analogRead(gasPin));
//  delay(1000); // Print value every 1 sec.
//}


#include <MQ2.h> // Include the MQ2 library
#define sensor_pin A0 // Analog Pin at which the sensor is connected

MQ2 mq2(sensor_pin); // Declare a object of class MQ2

void setup(){
  // put your setup code here, to run once:

  Serial.begin(9600); // Initialize the serial port at baud rate of 9600
  mq2.begin(); // Initialise object mq2
}
void loop(){
  // put your main code here, to run repeatedly:

  float* values = mq2.read(true); // Set it false if you don't want to print the values in the Serial monitor
}
