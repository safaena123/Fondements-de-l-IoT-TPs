

#include <TimerOne.h>
const int redledPin = 13;
const int greenledPin = 12;
volatile byte state = LOW;

void setup() {
   pinMode(redledPin, OUTPUT);
   pinMode(greenledPin, OUTPUT);
   TIMSK2 = (TIMSK2 & B11111110) | 0x01;
   TCCR2B = (TCCR2B & B11111000) | 0x07;
   Timer1.initialize(100000);
   Timer1.attachInterrupt( timerIsr );
}
 
 
void loop() {
   digitalWrite(redledPin, state);
}
 
 
ISR(TIMER2_OVF_vect){
   state = !state;
}

void timerIsr()
{
    digitalWrite( greenledPin, digitalRead( greenledPin ) ^ 1 );
}
