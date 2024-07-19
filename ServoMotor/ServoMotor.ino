#include <Servo.h>
Servo servo1;
float grau = 0.0;

float AtivadorServo(){
  if(Serial.available() > 0){ 
      grau = Serial.parseInt(); 
   }
   return grau;
}

void setup() {
  int pinServo = 9; 

  servo1.attach(pinServo); 

  Serial.begin(9600); 
}

void loop() {

  AtivadorServo();

  servo1.write(grau);

  Serial.print("Angulo: ");
  Serial.println(grau); 
  delay(4000);
  grau = 0.0;
}
