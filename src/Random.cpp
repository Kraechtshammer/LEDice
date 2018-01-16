#include "Random.h"

int min;
int max;
int seedAge;
#ifndef RANDOM_PIN
#define RANDOM_PIN 3
#endif

Random::Random(int min, int max){
  this->min = min;
  this->max = max + 1;
  this->seedAge = 0;
}

int Random::getRandomNumber(){
  if(seedAge > 5){
  randomSeed(analogRead(RANDOM_PIN));
  seedAge = 0;
  }
  seedAge++;
  return random(min, max);
}