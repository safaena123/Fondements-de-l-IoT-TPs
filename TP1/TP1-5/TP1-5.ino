#include <ezOutput.h> // ezOutput library

ezOutput redled(13);  // create ezOutput object that attach to pin 13;
ezOutput greenled(12);  // create ezOutput object that attach to pin 12;

void setup() {

}

// the loop function runs over and over again forever
void loop() {
  redled.loop();
  greenled.loop();
  redled.blink(500, 500); // 500 milliseconds ON, 500 milliseconds OFF (frequency of 10Hz)
  greenled.blink(500, 500);
}
