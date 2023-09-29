/*
  This Library is written for Bonezegei I2CScan
  Author: Bonezegei (Jofel Batutay)
  Date: September 2023 
*/
#ifndef _BONEZEGEI_I2CSCAN_H_
#define _BONEZEGEI_I2CSCAN_H_
#include <Arduino.h>
#include <Wire.h>

void Bonezegei_I2CScan() {
  Wire.begin();
  Serial.print("\n\n    ");
  for (int a = 0; a < 16; a++) {
    Serial.printf("%02x  ", a);
  }
  Serial.print("\n");

  int c = 0;
  for (int b = 0; b < 16; b++) {
    Serial.printf("%02x  ", b);
    for (int a = 0; a < 16; a++) {

      Wire.beginTransmission(c);
      int result = Wire.endTransmission();
      if (result == 0) {
        
        Serial.printf("%02x  ", c);
      } else {
        Serial.print("--  ");
      }
      c++;
    }
    Serial.print("\n");
    
  }
}

#endif
