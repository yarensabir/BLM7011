// dijital pinleri 3 şekilde tanımlayabiliyoruz
// #define relayPin D5
// pinMode(2, OUTPUT)
// const int relayPin = D5;

int ledPins[] = {2,3,4,5,6,7};

void setup() {
  for(int i=0; i<6; i++){
    pinMode(ledPins[i], OUTPUT);
  }
  
}

void loop() { 
  for(int i=0; i<6; i++){
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }
   
  for(int j=5; j>1; j--){
    digitalWrite(ledPins[j], HIGH);
    delay(200);
    digitalWrite(ledPins[j], LOW);
  }
}
