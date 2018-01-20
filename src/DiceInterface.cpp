#include "DiceInterface.h"

/**
   Creates a new dice.
   Depending on the integer given, it will return
   a specific type of dice (i.e. traditional)

   @param kind - integer defining the depiction method.
   @return the new dice.
*/
DiceInterface* createDice(int kind) {
  switch (kind) {
    case 0: return new traditional();
      break;
    case 1: return new sevenSegment();
      break;
    case 2: return new binary();
      break;
    default: return new traditional();
  }
}


