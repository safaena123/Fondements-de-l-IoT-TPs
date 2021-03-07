const int redledPin = 13;
const int greenledPin = 12;
const int buzzerPin = 9;  
const int potPin = A0;

int value;

void setup(){
  pinMode(redledPin, OUTPUT); 
  pinMode(greenledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);  

}

void loop(){
  
  value = analogRead(potPin);          
  digitalWrite(redledPin, HIGH);
  digitalWrite(greenledPin, HIGH);
  delay(value);
  digitalWrite(redledPin, LOW);
  digitalWrite(greenledPin, LOW);
  delay(value); 
  if((value == 1023) or (value == 0)){
      tone(buzzerPin, 1000); 
      delay(1000);       
      noTone(buzzerPin);     
      delay(1000);
    }
  
}
