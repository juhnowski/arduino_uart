// uno
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("                ");
  Serial.begin(9600);
}


void loop()
{
          while(Serial.available()) {
 
                // Выводим следующий байт FIFO в буфер второго
                
                lcd.setCursor(0,0);
                String buf = Serial.readString();
                lcd.print(buf);
                lcd.setCursor(0,1);
                String l = String(buf.length());
                lcd.print(l);
                Serial.print("OK");
        }
}