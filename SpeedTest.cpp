#include <Arduino.h>
#include "SpeedTest.h"


SpeedTestClass::SpeedTestClass(){};

void SpeedTestClass::begin(const unsigned long loopsInput) {
  loops = loopsInput;
  loopsRemaining = loops;
  startTimestamp = millis();
}


boolean SpeedTestClass::update() {
  if (--loopsRemaining == 0) {
    endTimestamp = millis();
    return true;
  }
  return false;
}


float SpeedTestClass::result() {
  return (float)(endTimestamp - startTimestamp) * 1000 / loops;
}


SpeedTestClass SpeedTest;
