#include "DiceInterface.h"
#include "Arduino.h"

static const int traditional::digit1[] = {LED4};
static const int traditional::digit2[] = {LED2, LED6};
static const int traditional::digit3[] = {LED2, LED4, LED6};
static const int traditional::digit4[] = {LED1, LED2, LED6, LED7};
static const int traditional::digit5[] = {LED1, LED2, LED4, LED6, LED7};
static const int traditional::digit6[] = {LED1, LED2, LED3, LED5, LED6, LED7};
static const int traditional::allLED[] = {LED1, LED2, LED3, LED4, LED5, LED6, LED7};

void traditional::printDigit(int pins[], int size){
  clearLED();
  for(int i = 0; i < size; i++){
    digitalWrite(pins[i], HIGH);
  }
}

void traditional::clearLED(){
  for(int i = 0; i < 7; i++){
    digitalWrite(allLED[i], LOW);
  }
}

void traditional::showDigit(int digit){
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

