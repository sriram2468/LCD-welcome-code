
#include<ESP8266WiFi.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

#define WiFi_NAME "iPhone"
#define WiFi_PASSWORD "Kesavan"
  
void setup() 
{
  lcd.init();         // initialize the lcd
  lcd.backlight();
  
  Serial.begin(9600);
  WiFi.begin(WiFi_NAME,WiFi_PASSWORD);
  Serial.print("Connecting");

 while(WiFi.status()!= WL_CONNECTED)
 {
  Serial.print("CONNECTING");
  delay(100);
 }
  Serial.println();
  Serial.print("CONNECTED");
  Serial.println(WiFi_NAME);
 
  
}

void loop() 
{
 lcd.setCursor(4,0);
 lcd.print("WELCOME");
 lcd.setCursor(2,1);
 lcd.print("To Majestic Technologies");
 delay(1000);
 lcd.setCursor(2,0);
 lcd.print("How Are U Guys");
 lcd.setCursor(1,1);
 lcd.print(" Thankyou For your Time");
 delay(1000);
 
  
}
