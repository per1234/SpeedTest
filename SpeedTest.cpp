#include <Arduino.h>
#include "SpeedTest.h"


SpeedTestClass::SpeedTestClass() {};

void SpeedTestClass::begin(const unsigned long loopsInput) {
  loops = loopsInput;
  loopCount = 0;
  startTimestamp = millis();
}


boolean SpeedTestClass::update() {
  if (++loopCount >= loops) {
    endTimestamp = millis();
    return true;
  }
  return false;
}


float SpeedTestClass::result() {
  return (float)(endTimestamp - startTimestamp) * 1000 / loopCount;
}


SpeedTestClass SpeedTest;
