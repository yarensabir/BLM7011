const int sPin = 10;
const int lPin = 3;

ins spin_state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(sPin, INPUT);
  pinMode(lPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(sPin == HIGH){
    digitalWrite(lPin, HIGH);
  }
  
  

}
