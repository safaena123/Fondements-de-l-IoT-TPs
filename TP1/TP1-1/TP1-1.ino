
int redLED = 13;
int greenLED = 12;

void setup() {
  // initialize digital pins as an output.
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(redLED, HIGH);   
  delay(1000);                       // wait for a second
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH); 
  delay(2000);                       // wait for two seconds
  digitalWrite(greenLED, LOW);
}
