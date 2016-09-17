#ifndef SpeedTest_h
#define SpeedTest_h
#include <Arduino.h>


class SpeedTestClass {
  public:
    SpeedTestClass();
    void begin(const unsigned long loops);
    boolean update();
    float result();
  private:
    unsigned long loops;
    unsigned long loopCount;
    unsigned long startTimestamp;
    unsigned long endTimestamp;
};


extern SpeedTestClass SpeedTest;


#endif  //SpeedTest_h
