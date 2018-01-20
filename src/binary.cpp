#include "DiceInterface.h"
#include "Arduino.h"

static const int binary::digit1[] = {LED1};
static const int binary::digit2[] = {LED2};
static const int binary::digit3[] = {LED1, LED2};
static const int binary::digit4[] = {LED3};
static const int binary::digit5[] = {LED3, LED1};
static const int binary::digit6[] = {LED3, LED2};
static const int binary::allLED[] = {LED1, LED2, LED3};

binary::binary(void) {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void binary::printDigit(int pins[], int size) {
  clearLED();
  for (int i = 0; i < size; i++) {
    digitalWrite(pins[i], HIGH);
  }
}

void binary::clearLED() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(allLED[i], LOW);
  }
}

void binary::startAnimation() {
  for (int i = 0; i < 5; i++) {
    showDigit(1);
    delay(200);
    showDigit(2);
    delay(200);
    showDigit(4);
    delay(200);
    clearLED();
  }
}

void binary::showDigit(int digit) {
  switch (digit) {
    case 1: printDigit(digit1, 1);
      break;
    case 2: printDigit(digit2, 1);
      break;
    case 3: printDigit(digit3, 2);
      break;
    case 4: printDigit(digit4, 1);
      break;
    case 5: printDigit(digit5, 2);
      break;
    case 6: printDigit(digit6, 2);
      break;
  }
}
