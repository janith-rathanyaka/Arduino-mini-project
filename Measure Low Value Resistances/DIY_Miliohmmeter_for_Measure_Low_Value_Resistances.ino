#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("MiliOhm Meter");
}
 
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1024.0);
 
  float Rx = voltage / 0.104;
 
  if (Rx > 41) {
  
  lcd.setCursor(0,1);
  lcd.print( " Out of Range ");

  
  delay(1000);
}
  if (Rx < 40) {
    lcd.setCursor(0,1);
  lcd.print( Rx);

  lcd.setCursor(5, 1);
  lcd.print(" Ohm      ");
  delay(1000);
}
}
