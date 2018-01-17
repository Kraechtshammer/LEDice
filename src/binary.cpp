#include "DiceInterface.h"
#include "Arduino.h"

static const int binary::digit1[] = {LED1};
static const int binary::digit2[] = {LED2};
static const int binary::digit3[] = {LED1, LED2};
static const int binary::digit4[] = {LED3};
static const int binary::digit5[] = {LED3, LED1};
static const int binary::digit6[] = {LED3, LED2};
static const int binary::allLED[] = {LED1, LED2, LED3};

void binary::printDigit(int pins[], int size){
  clearLED();
  for(int i = 0; i < size; i++){
    digitalWrite(pins[i], HIGH);
  }
}

void binary::clearLED(){
  for(int i = 0; i < 7; i++){
    digitalWrite(allLED[i], LOW);
  }
}

void binary::showDigit(int digit){
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