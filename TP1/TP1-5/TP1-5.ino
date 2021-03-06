#include <ezOutput.h> // ezOutput library

ezOutput redled(13);  // create ezOutput object that attach to pin 13;
ezOutput greenled(12);  // create ezOutput object that attach to pin 12;

void setup() {

}

// the loop function runs over and over again forever
void loop() {
  redled.loop();
  greenled.loop();
  redled.blink(50, 50); // 50 milliseconds ON, 50 milliseconds OFF (frequency of 10Hz)
  greenled.blink(250, 250); // 250 milliseconds ON, 250 milliseconds OFF (frequency of 5Hz)
}
