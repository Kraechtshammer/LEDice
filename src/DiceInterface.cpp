#include "DiceInterface.h"

DiceInterface* createDice(int kind){
  switch (kind){
    case 0: return new traditional();
      break;
    case 1: return new sevenSegment();
      break;
    case 2: return new binary();
      break;
    default: return new traditional();
  }
}

/* void traditional::showDigit(int digit){
  switch(digit){
    case 1: 
      
  }
}

void sevenSegment::showDigit(int digit){ 
  
}*/