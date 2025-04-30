// dijital pinleri 3 şekilde tanımlayabiliyoruz
// #define relayPin D5
// pinMode(2, OUTPUT)
// const int relayPin = D5;
// #define relayPin D5

void setup() {
  
}

void turnOff() {
  digitalWrite(2, LOW); 
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW); 
}

void loop() {
  digitalWrite(2, HIGH); 
  delay(2000); 
  digitalWrite(2, LOW); 
  delay(2000); 

  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  delay(2000);

  digitalWrite(4, HIGH);
  delay(2000); 
  digitalWrite(4, LOW);
  delay(2000);

  digitalWrite(5, HIGH);
  delay(2000); 
  digitalWrite(5, LOW); 
  delay(2000);

  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
  delay(2000);

  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(7, LOW);
  delay(2000);

  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
  delay(2000);

  digitalWrite(5, HIGH); 
  delay(2000); 
  digitalWrite(5, LOW);
  delay(2000);

  digitalWrite(4, HIGH); 
  delay(2000); 
  digitalWrite(4, LOW);
  delay(2000);

  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(3, LOW); 
  delay(2000);
}
