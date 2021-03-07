const int redledPin = 13;
const int greenledPin = 12;
byte stateLED13 = HIGH;
byte stateLED12 = HIGH;
unsigned long dateofLastChange13 = 0;
unsigned long dateofLastChange12 = 0;
const int buzzerPin = 9;  
const int potPin = A0;

int value;

void setup(){
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);  

}

void loop(){
  
  value = analogRead(potPin);
  flashLED13();
  flashLED12();           
  if((value == 1023) or (value == 0)){
      tone(buzzerPin, 1000); 
      delay(1000);       
      noTone(buzzerPin);     
      delay(1000);
    }
  
}

void flashLED13()
{
  unsigned long currentDate = millis();
  unsigned long interval = currentDate - dateofLastChange13;

  if (stateLED13 == HIGH && interval > value) {

    stateLED13 = LOW;
    digitalWrite(redledPin, stateLED13);
    dateofLastChange13 = currentDate;
  }
  else if (stateLED13 == LOW && interval > value) {

    stateLED13 = HIGH;
    digitalWrite(redledPin, stateLED13);
    dateofLastChange13 = currentDate;
  }
}
void flashLED12()
{
  unsigned long currentDate = millis();
  unsigned long interval = currentDate - dateofLastChange12;

  if (stateLED12 == HIGH && interval > value) {

    stateLED12 = LOW;
    digitalWrite(greenledPin, stateLED13);
    dateofLastChange12 = currentDate;
  }
  else if (stateLED12 == LOW && interval > value) {

    stateLED12 = HIGH;
    digitalWrite(greenledPin, stateLED12);
    dateofLastChange12 = currentDate;
  }
}
