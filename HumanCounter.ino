#include <LiquidCrystal.h>
int sensorValuel = 0, sensorValue2 = 0, count=0;
int sensorPinl = 8, sensorPin2 = 9;
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); 
void setup()
{
pinMode(sensorPinl, INPUT);
pinMode(sensorPin2, INPUT);
lcd.begin (16,2);
lcd.setCursor(5,0);
lcd.print("PERSON COUNT");
lcd.setCursor(0,1);
lcd.print ("PROJECT");
delay(3000);
lcd.clear();
}
void loop(){
  sensorValuel = digitalRead(sensorPinl);
  sensorValue2 = digitalRead(sensorPin2); 
  Serial.println(sensorValuel); 
  Serial.println(sensorValue2);
  if (sensorValuel = HIGH)
  {
    count ++;
    lcd.setCursor (3,0);
    lcd.print("PERSON COUNT");
    lcd.setCursor (10,0);
    lcd.print(count);
    delay(500);
  }
   else if(sensorValue2 = HIGH)
   {
    count --;
    lcd.setCursor (3,0);
    lcd.print("PERSON COUNT");
    lcd.setCursor (10,1);
    lcd.print(count);
    delay(500);
   }
   else
   {

   }
}
