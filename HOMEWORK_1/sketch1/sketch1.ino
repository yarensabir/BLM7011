// dijital pinleri 3 şekilde tanımlayabiliyoruz
// #define relayPin D5
// pinMode(2, OUTPUT)
// const int relayPin = D5;
// #define relayPin D5

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);
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
  delay(200); 
  digitalWrite(2, LOW); 

  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);

  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);

  digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);

  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);

  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(3, LOW);
}
