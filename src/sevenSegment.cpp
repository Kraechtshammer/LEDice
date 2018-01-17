#include "DiceInterface.h"
#include "Arduino.h"

static const int sevenSegment::digit1[] = {LED2, LED3};
static const int sevenSegment::digit2[] = {LED1, LED2, LED7, LED5, LED4};
static const int sevenSegment::digit3[] = {LED1, LED2, LED3, LED4, LED7};
static const int sevenSegment::digit4[] = {LED2, LED6, LED7, LED3};
static const int sevenSegment::digit5[] = {LED1, LED6, LED7, LED3, LED4};
static const int sevenSegment::digit6[] = {LED1, LED3, LED4, LED5, LED6, LED7};
static const int sevenSegment::allLED[] = {LED1, LED2, LED3, LED4, LED5, LED6, LED7};

void sevenSegment::printDigit(int pins[], int size){
  clearLED();
  for(int i = 0; i < size; i++){
    digitalWrite(pins[i], HIGH);
  }
}

void sevenSegment::clearLED(){
  for(int i = 0; i < 7; i++){
    digitalWrite(allLED[i], LOW);
  }
}

void sevenSegment::showDigit(int digit){
  switch(digit){
    case 1: printDigit(digit1, digit);
            break;
    case 2: printDigit(digit2, digit);
            break;
    case 3: printDigit(digit3, digit);
            break;
    case 4: printDigit(digit4, digit);
            break;
    case 5: printDigit(digit5, digit);
            break;
    case 6: printDigit(digit6, digit);
            break;
  }
}

