//Mega
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  Serial.begin(9600);
  Serial3.begin(9600);
}


void loop()
{
  for (int i=0; i<1000;i++){
    lcd.setCursor(0,0);
    String buf = String(i);
    Serial.println(buf);
    Serial3.print(buf);
    lcd.print(buf);
    while (Serial3.readString()!="OK"){
      delay(10);
    }
  }
}