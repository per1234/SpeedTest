#ifndef SpeedTest_h
#define SpeedTest_h
#include <Arduino.h>


class SpeedTestClass {
public:
  SpeedTestClass();
  void begin(const unsigned long loops);
  bool update();
  float result();

private:
  unsigned long loops;
  unsigned long loopsRemaining;
  unsigned long startTimestamp;
  unsigned long endTimestamp;
};


extern SpeedTestClass SpeedTest;


#endif  //SpeedTest_h
