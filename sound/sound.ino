/*int soundDetectedPin = 10; // Use Pin 10 as our Input
int soundDetectedVal = HIGH; // This is where we record our Sound Measurement
boolean bAlarm = false;
int val;
unsigned long lastSoundDetectTime; // Record the time that we measured a sound


int soundAlarmTime = 500; // Number of milli seconds to keep the sound alarm high


void setup ()
{
  Serial.begin(9600);  
  pinMode (soundDetectedPin, INPUT) ; // input from the Sound Detection Module
}
void loop ()
{
  soundDetectedVal = digitalRead (soundDetectedPin) ; // read the sound alarm time
   val=analogRead(10);   //connect mic sensor to Analog 0
      Serial.print("Sound=");
      Serial.println(val,DEC);
  if (soundDetectedVal == LOW) // If we hear a sound
  {
  
    lastSoundDetectTime = millis(); // record the time of the sound alarm
    // The following is so you don't scroll on the output screen

      Serial.println("LOUD, LOUD");
 
    
  }
  else
  {
    if( (millis()-lastSoundDetectTime) > soundAlarmTime  &&  bAlarm){
      Serial.println("quiet");
      bAlarm = false;
    }
  }
  delay(1000);
}
*/


const int LED_PIN = LED_BUILTIN; // Declare variable to store builtin LED pin number
const int SOUND_PIN = A0; // Declare pin A0 to initialise sensor

int soundVal = 0; // Initialise variable to store output

void setup () {
  // put your setup code here, to run once:

  Serial.begin(9600); // Starts the serial communication at 9600 baud rate
  pinMode(LED_PIN, OUTPUT); // Sets the LED_PIN as Output
  pinMode(SOUND_PIN, INPUT); // Sets the SOUND_PIN as Input
}
 
void loop () {
  // put your main code here, to run repeatedly:

  soundVal = analogRead(SOUND_PIN); // Reads the analog input at A0
  Serial.println(soundVal); // Serially print the soundVal
  if (soundVal > 100) // Check if the soundVal is above threshold value i.e. 100
  {
    // Block of code executed if above condition is true
    digitalWrite(LED_PIN, HIGH); // Sets the LED on HIGH state
  }
  else
  {
    // Else the following block of code is executed
    digitalWrite(LED_PIN, LOW); // Sets the LED on LOW state
  }
  delay(1000); // Wait for 1 second before accessing the sensor again 
}
