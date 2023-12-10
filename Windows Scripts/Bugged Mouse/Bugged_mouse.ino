#include "DigiMouse.h"

void setup() {
  DigiMouse.begin(); 
  randomSeed(analogRead(0));
}

void loop() {
  for(int i=0; i<100; i++) {
    int randomDirection = random(4); 
    switch(randomDirection) {
      case 0:
        DigiMouse.moveX(9); 
        break;
      case 1:
        DigiMouse.moveX(-9); 
        break;
      case 2:
        DigiMouse.moveY(9); 
        break;
      case 3:
        DigiMouse.moveY(-9); 
        break;
    }
    DigiMouse.delay(10); 
  }
}
