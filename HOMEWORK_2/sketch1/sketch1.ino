int passw[] = {1,1,1,1};

int switchs[] = {8,9,10,11};
int switch_states[] = {0,0,0,0};
int last_switch_states[] = {0,0,0,0};

int led_g = 4, led_r = 7;

void setup() {
  pinMode(led_g, OUTPUT);
  pinMode(led_r, OUTPUT);
  for(int i=0; i<4; i++){
    pinMode(switchs[i], INPUT);
  } 
  digitalWrite(led_g, LOW);
  digitalWrite(led_r, LOW);
}

void loop() {
  delay(1000);
  for(int i=0; i<4; i++){
    switch_states[i] = digitalRead(switchs[i]);
  }
  for(int j=0; j<4; j++){
    if(switch_states[j] != last_switch_states[j]){
      last_switch_states[j] = switch_states[j];
      for(int k=0; k<4; k++){
        if(passw[k] != switch_states[k]){
          for(int i=0; i<3; i++){
            digitalWrite(led_r, HIGH);
            delay(100);
            digitalWrite(led_r, LOW);
            delay(100);
          }
          break;
        }
        else{
          digitalWrite(led_g, HIGH);
          delay(3000);
          digitalWrite(led_g, LOW);
        }
      }
    }
  }
}
