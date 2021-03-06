byte stateLED13 = HIGH;
byte stateLED12 = HIGH;
unsigned long dateofLastChange13 = 0;
unsigned long dateofLastChange12 = 0;

void setup() {

}

// the loop function runs over and over again forever
void loop() {
    flashLED13();
    flashLED12();
}

void flashLED13()
{
  unsigned long currentDate = millis();
  unsigned long interval = currentDate - dateofLastChange13;
 
  if (stateLED13 == HIGH && interval > 50) {
    
    stateLED13 = LOW;
    digitalWrite(13, stateLED13);
    dateofLastChange13 = currentDate;
  }
  else if (stateLED13 == LOW && interval > 50) {
    
    stateLED13 = HIGH;
    digitalWrite(13, stateLED13);
    dateofLastChange13 = currentDate;
  }
}
void flashLED12()
{
  unsigned long currentDate = millis();
  unsigned long interval = currentDate - dateofLastChange12;
 
  if (stateLED12 == HIGH && interval > 250) {
    
    stateLED12 = LOW;
    digitalWrite(12, stateLED13);
    dateofLastChange12 = currentDate;
  }
  else if (stateLED12 == LOW && interval > 250) {
    
    stateLED12 = HIGH;
    digitalWrite(12, stateLED12);
    dateofLastChange12 = currentDate;
  }
}
