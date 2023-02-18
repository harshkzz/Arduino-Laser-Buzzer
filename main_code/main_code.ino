#define pin_laser A1        // Change pin number here
#define pin_buzzer 3 
#define light_value 80     // The amount of light can depend upon
                           // your environment and the laser module
                           // used so change the value accordingly
void setup(){
  Serial.begin(9600);
  pinMode(pin_laser, INPUT);    
  pinMode(pin_buzzer, OUTPUT);
}

void loop(){
  Serial.println(analogRead(pin_laser));
  if(analogRead(pin_laser) > light_value){
    tone(pin_buzzer, 500);
    delay(100);
  }
  else{
    noTone(pin_buzzer);
  }
}

