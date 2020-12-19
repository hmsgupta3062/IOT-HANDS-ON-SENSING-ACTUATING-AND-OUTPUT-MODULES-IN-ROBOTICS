#include <LiquidCrystal.h> // Include the LiquidCrystal library

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Create a LiquidCrystal object

void setup() {
  // put your setup code here, to run once:
  
  lcd.begin(16, 2); // Initialise the lcd object in addition to specifying the number of rows and columns
  lcd.clear(); // To clear the message displaying on the lcd and reset the display
  lcd.setCursor(0, 0); // To set the cursor at the (0, 0) position
  lcd.print("hello, world!"); // Print the message on the lcd
}

void loop() {
  // put your main code here, to run repeatedly:

}
