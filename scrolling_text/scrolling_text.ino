// include the library code:
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  for(int i = 0; i<=16; i+=2){
    //lcd.autoscroll();
    lcd.setCursor(0, 0);
    lcd.print("Valentine's Day!");
    //lcd.noAutoscroll();
    lcd.setCursor(i, 1);
    lcd.print("<3"); 
    delay(1000); 
    lcd.clear();
  }
}

