#define pin_laser A1                        // Change A1 here if you want to use any other analog pin
void setup(){
  Serial.begin(9600);
  pinMode(pin_laser, INPUT);               // Setting the pin as input pin
}
void loop(){
  Serial.println(analogRead(pin_laser));   // Reading the values from the pin and printing it on the serial monitor 
}
