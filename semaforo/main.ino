int pinLed_rojo = 2;
int pinLed_amarillo = 3;
int pinLed_verde = 4;
void setup() {
  pinMode(pinLed_rojo, OUTPUT);
  pinMode(pinLed_amarillo, OUTPUT);
  pinMode(pinLed_verde, OUTPUT);
}

void loop() {
  digitalWrite(pinLed_rojo, HIGH);
  delay(3000);                 
  digitalWrite(pinLed_rojo, LOW); 
  digitalWrite(pinLed_amarillo, HIGH);
  delay(1000);                 
  digitalWrite(pinLed_amarillo, LOW); 
  digitalWrite(pinLed_verde, HIGH);
  delay(3000);                 
  digitalWrite(pinLed_verde, LOW); 
}
