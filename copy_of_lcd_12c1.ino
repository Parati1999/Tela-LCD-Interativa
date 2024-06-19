// C++ code
//
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd_1(32, 16, 2);

void setup()
{
  lcd_1.init();

  lcd_1.setCursor(0, 0);
  lcd_1.backlight();
  lcd_1.display();
}

void loop()
{
  lcd_1.setCursor(0, 0);
  lcd_1.print("Feliz");
  delay(1000); // Wait for 1000 millisecond(s)
  lcd_1.setCursor(0, 1);
  lcd_1.print("Dia dos Namorados");
  delay(1000); // Wait for 1000 millisecond(s)
  lcd_1.leftToRight();
}