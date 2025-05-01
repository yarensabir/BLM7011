int passw[] = {0,0,0,0};

int switchs[] = {8,9,10,11};
int switch_states[] = {0,0,0,0};
int last_switch_states[] = {0,0,0,0};

int led_g = 4, led_r = 7;

void setup() {
  pinMode(led_g, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(switchs[i], INPUT);
  for(int i=0; i<4; i++){
    pinMode(switchs[i], INPUT);
  } 
}

void loop() {
  for(int i=0; i<4; i++){
    switch_states[i] = digitalRead(switchs[i]);
  }
  for(int j=0; j<4; j++){
    if(switch_states[i] != last_switch_states[i]){
      last_switch_states[i] = switch_states[i]
    }
    
  }

  
  

}
