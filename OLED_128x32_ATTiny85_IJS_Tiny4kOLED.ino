//REBECCA KEVIN THOMAS
//ELECTRONIC BADGE FOR CHRISTMAS DECEMBER 2019
//ADDED EXTRA font8x8.h file to this library from the TinyOzLED library.. But it is not of much use
//In 8x8, the width is 8, height is 8.. In 6x8, the width is 6, height is 8. 
//In 8x8, the last two pixels of width is 0x00.. i.e. blank, that is wastage of space OF 2 PIXELS to the right of each character.
/*
//  * Tiny4kOLED - Drivers for SSD1306 controlled dot matrix OLED/PLED 128x32 displays
//  *
//  * Based on ssd1306xled, re-written and extended by Stephen Denne
//  * from 2017-04-25 at https://github.com/datacute/Tiny4kOLED
//  *
//  */
//ATTiny85-ArduinoUnoAsISP
//VCC8-3.3V
//SCK7-D13
//MISO6-D12
//MOSI5-D11
//GND4-GND
//RESET1-D10

#include <Tiny4kOLED.h>

uint8_t count=0;

void setup() { 
  
  pinMode(3,INPUT_PULLUP);
  pinMode(4,OUTPUT);
  pinMode(1,OUTPUT);
  oled.begin();
  oled.clear();
  oled.on(); 
  
  oled.fill(0xFF);
  delay(1000);
  
  oled.clear();
  delay(100);

  oled.clear();
  oled.setFont(FONT8X16);
  oled.setCursor(5, 0);
  oled.print(F("Christmas Badge"));  
  oled.setFont(FONT6X8);
  oled.setCursor(13, 2);
  oled.print(F("Jithin Saji Isaac")); 
  oled.setCursor(13, 3);
  oled.print(F("Don Bosco, Mumbai")); 
  delay(2000);
  oled.clear();
  oled.setFont(FONT8X16);
  oled.setCursor(5, 0);
  oled.print(F("PRESS LEFT KEY!")); 
}

void loop() {

    if(count==0 && digitalRead(3)==LOW)
    {
      oled.clear();
      oled.setFont(FONT8X16);
      oled.setCursor(15, 0);
      oled.print(F("KEVIN THOMAS"));
      count++;
      delay(300);
    }
   
     if(count==1 && digitalRead(3)==LOW)
    {
      oled.clear();
      oled.setCursor(0, 2);
      oled.print(F("MERRY CHRISTMAS!"));
      count++;
      delay(300);
    }  

    if(count==2 && digitalRead(3)==LOW)
    {
      oled.setCursor(10, 0);
      oled.print(F("KEVIN THOMAS"));
      count++;
      delay(300);
    }


    if(count==3 && digitalRead(3)==LOW)
    {
      oled.clear();
      oled.setFont(FONT6X8);
      oled.setCursor(10, 0);
      oled.print(F("KEVIN SUNNY THOMAS"));
      oled.setCursor(34, 1);
      oled.print(F("wishes you"));
      oled.setFont(FONT8X16);
      oled.setCursor(0, 2);
      oled.print(F("MERRY CHRISTMAS!"));
      count++;
      delay(300);
    }



    if(count==4 && digitalRead(3)==LOW)
    {
      digitalWrite(4,HIGH);
      count++;
      delay(300);
    }

    if(count==5 && digitalRead(3)==LOW)
    {
      digitalWrite(1,HIGH);
      count++;
      delay(300);
    }

    if(count==6 && digitalRead(3)==LOW)
    {
      oled.clear();
      oled.setFont(FONT8X16);
      oled.setCursor(15, 1);
      oled.print(F("KEVIN THOMAS"));
      count++;
      delay(300);
    }
    
    if(count==7 && digitalRead(3)==LOW)
    {
      oled.clear();
      oled.setFont(FONT8X16);
      oled.setCursor(0, 1);
      oled.print(F("MERRY CHRISTMAS!"));
      count++;
      delay(300);
    }
    
    if(count==8 && digitalRead(3)==LOW)
    {
      oled.clear();
      oled.setFont(FONT6X8);
      oled.setCursor(10, 0);
      oled.print(F("KEVIN SUNNY THOMAS"));
      oled.setCursor(34, 1);
      oled.print(F("wishes you"));
      oled.setFont(FONT8X16);
      oled.setCursor(0, 2);
      oled.print(F("MERRY CHRISTMAS!"));
      delay(500);
          while(1)
          {
                digitalWrite(1,LOW);digitalWrite(4,LOW);
                for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) 
                {
                  // sets the value (range from 0 to 255):
                  analogWrite(1, fadeValue);
                  // wait for 30 milliseconds to see the dimming effect
                  delay(30);
                }
                for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) 
                {
                  // sets the value (range from 0 to 255):
                  analogWrite(4, fadeValue);
                  // wait for 30 milliseconds to see the dimming effect
                  delay(30);
                }   
                digitalWrite(1,LOW);digitalWrite(4,LOW); 
                delay(200);     
                for(int i=0;i<3;i++)
                {
                  digitalWrite(1,HIGH);
                  delay(200);
                  digitalWrite(1,LOW);
                  delay(200);
                  digitalWrite(4,HIGH);
                  delay(200);
                  digitalWrite(4,LOW);
                  delay(200);
                }
          }      
    count++;
    }
}
