#include <Stepper.h>

#define e1 8
#define e2 9
#define e3 10
#define e4 11

const int passosPorGiro = 64; 
Stepper mp(passosPorGiro,e1,e3,e2,e4);

void setup() {

  mp.setSpeed(500); //RPM


}

void loop() {
  
  
  mp.step(passosPorGiro);
  delay(2000);
  
}
