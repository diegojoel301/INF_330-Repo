int pinLed_1 = 3;
int pinLed_2 = 6;
void setup() {
  pinMode(pinLed_1, OUTPUT);
  pinMode(pinLed_2, OUTPUT);
  digitalWrite(pinLed_2, HIGH);
}

void loop() {
  digitalWrite(pinLed_1, HIGH);
  delay(1000);                 
  digitalWrite(pinLed_1, LOW); 
  delay(1000);    
}
