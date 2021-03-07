const int redledPin = 13;
const int greenledPin = 12;
const int buzzerPin = 9;  
const int LM35Pin = A0;
float tempInC;
float milliVolt;
int value;

void setup(){
  pinMode(redledPin, OUTPUT); 
  pinMode(greenledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(LM35Pin, INPUT);  

}

void loop(){
  
  value = analogRead(LM35Pin);
  milliVolt = ((value * 4870.0) / 1024); 
  tempInC = milliVolt/10; /* Temperature in Degree Celsius */          
  digitalWrite(redledPin, HIGH);
  digitalWrite(greenledPin, HIGH);
  delay(tempInC);
  digitalWrite(redledPin, LOW);
  digitalWrite(greenledPin, LOW);
  delay(tempInC); 
  if((tempInC >= 150) or (tempInC <= 0)){
      tone(buzzerPin, 1000); 
      delay(1000);       
      noTone(buzzerPin);     
      delay(1000);
    }
  
}
