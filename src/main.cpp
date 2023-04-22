#include <Arduino.h>
#include <PCF8574.h>
//#include <wire.h>

PCF8574 pcf8574(0x20); // Set i2c HEX address

void setup(){
  Serial.begin(921600);
 
  pcf8574.pinMode(P0, OUTPUT);
  pcf8574.pinMode(P1, OUTPUT);

  pcf8574.begin();
}

void loop(){
  pcf8574.digitalWrite(P0, HIGH); // If Button is Pressed
  pcf8574.digitalWrite(P1, LOW);  // When Button is Released
  delay(1000);
  pcf8574.digitalWrite(P0, LOW); // If Button is Pressed
  pcf8574.digitalWrite(P1, HIGH);  // When Button is Released
  delay(500);
}