
#include "LEDice.h"


DiceInterface* output; //the DiceInterface
Random randm(RANDOM_MIN, RANDOM_MAX); //random generator
int lastPress = 0; //variable for the dice cooldown

/**
   Rolls the dice. It will quickly show a few numbers to simulate a dice-roll.
*/
void diceRoll() {
  for (int i = 10; i < 300; i += 40) {
    delay(i);
    (*output).showDigit(randm.getRandomNumber());
  }
}

void setup() {
  output = createDice(DEPICTION); //initialize the Dice
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);
  (*output).startAnimation(); //roll the start Animation
}

void loop() {
  int buttonState = digitalRead(BUTTON);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    buttonState = LOW; //reset the buttonState
    diceRoll();        //roll the dice!
    lastPress = millis(); //save the millis, so we know how much time has progressed since the last roll!
  }

  //if 5 seconds have passed, clear the dice.
  if (((millis() - lastPress) > 5000) && ((millis() - lastPress) < 5020)) {
    (*output).clearLED();
  }

}

