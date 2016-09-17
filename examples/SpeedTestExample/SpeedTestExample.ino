// Demonstrates use of the SpeedTest library.

#include <SpeedTest.h>

const unsigned long speedTestLoops = 100000;  //the number of loops to do before the test is complete

void setup() {
  Serial.begin(9600);
  SpeedTest.begin(speedTestLoops);  //start the test
}

void loop() {
  if (SpeedTest.update() == true) {  //check if test is complete
    Serial.print("SpeedTest.result() = ");
    Serial.println(SpeedTest.result());
    SpeedTest.begin(speedTestLoops);  //start the next test
  }
}
