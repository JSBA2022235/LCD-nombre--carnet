#include <LiquidCrystal.h>  
 LiquidCrystal lcd(10, 9, 8, 5, 4, 3, 2);
 void setup()
 {
    lcd.begin(16, 2);
    lcd.setCursor(0, 0);
    lcd.print("Sebastian");
    lcd.setCursor(3, 1);
    lcd.print("2022235");
 }
 void loop()
 {   
 }
