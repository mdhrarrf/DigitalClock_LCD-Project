#include <LiquidCrystal.h>

LiquidCrystal lcd(10, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2); 
  lcd.clear();
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String timeString = Serial.readStringUntil('\n');
    
    if (timeString.length() > 0) {
      lcd.clear(); 
      lcd.setCursor(0, 0);
      lcd.print("Jam Digital HDR:");
      lcd.setCursor(0, 1);
      lcd.print(timeString);
    }
  }
}
