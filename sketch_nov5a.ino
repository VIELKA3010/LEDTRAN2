const int transistorPin = 9;

void setup() {
  pinMode(transistorPin, OUTPUT);
}

void loop() {
  digitalWrite(transistorPin, HIGH);
  delay(1000); 
  
  digitalWrite(transistorPin, LOW);
  delay(1000); 
}