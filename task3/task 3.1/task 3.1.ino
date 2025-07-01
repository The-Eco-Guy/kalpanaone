#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>
Adafruit_7segment display = Adafruit_7segment();
// C++ code
//
void setup()
{
  display.begin(0x70);
}

void loop()
{
  for (int i=0;i<49;i++){
    display.print(i);
    display.writeDisplay();
    delay(1000);
  }}