/*
  Scan address 0-255 connected to I2c
  and prints the output to Serial
  Author: Bonezegei (Jofel Batutay)
  Date: September 2023 
*/

#include <Bonezegei_I2CScan.h>

void setup() {
  Serial.begin(115200);
  Bonezegei_I2CScan();
}

void loop() {
}
