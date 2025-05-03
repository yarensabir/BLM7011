// dijital pinleri 3 şekilde tanımlayabiliyoruz
// #define relayPin D5
// pinMode(2, OUTPUT)
// const int relayPin = D5;

int ledPins[] = {2,3,4,5,6,7};
int i = 0, counter = 0;

void setup() {
  for(int i=0; i<6; i++){
    pinMode(ledPins[i], OUTPUT);
  }  
}

void loop() {
  //const int ledPins[] = {2,3,4,5,6,7};
  
  while(i>=0){
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
    
    if(counter==0){
      i++;
      if(i>5){
        counter = 1;
        i--;
      }
    }
    else{
      i--;
      if(i<=0){
        counter = 0;
        i=0;
      }
    }
  }
}
