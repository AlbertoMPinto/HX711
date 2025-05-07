# 1 "C:\\Users\\alberto\\AppData\\Local\\Temp\\tmpq4_vhbgl"
#include <Arduino.h>
# 1 "F:/~GitHub/HX711/examples/HX711_basic_example/HX711_basic_example.ino"
#include "HX711.h"


const int LOADCELL_DOUT_PIN = 13;
const int LOADCELL_SCK_PIN = 12;

HX711 scale;
void setup();
void loop();
#line 9 "F:/~GitHub/HX711/examples/HX711_basic_example/HX711_basic_example.ino"
void setup() {
  Serial.begin(57600);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
}

void loop() {

  if (scale.is_ready()) {
    long reading = scale.read();
    Serial.print("HX711 reading: ");
    Serial.println(reading);
  } else {
    Serial.println("HX711 not found.");
  }

  delay(1000);

}