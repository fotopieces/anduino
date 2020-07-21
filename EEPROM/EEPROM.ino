#include <EEPROM.h>

void setup() {
  Serial.begin(9600);
  int data = 500;
  int dataGet = 0;
  EEPROM.put(0,data);
  EEPROM.get(0,dataGet);
  Serial.println(dataGet);
}

void loop() {
}
