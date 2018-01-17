/*
  Tests your board arrangement. Fill in the Pin Numbers down below!
  LEDs should turn on in order when you push the button, then turn off together.
*/

// Set your own Pins here. layout should be as following for the traditional dice layout:
//    1   2
//    3 4 5
//    6   7
const int buttonPin = 10;     // Button
const int led1 =  2;          
const int led2 =  3;
const int led3 =  4;
const int led4 =  5;
const int led5 =  6;
const int led6 =  7;
const int led7 =  8;


int buttonState = 0;         // variable for reading the button status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  
  // initialize the button pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the button value:
  buttonState = digitalRead(buttonPin);

  // check if the button has been pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LEDs on:
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(led1, HIGH);
    delay(250);
    digitalWrite(led2, HIGH);
    delay(250);
    digitalWrite(led3, HIGH);
    delay(250);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led7, HIGH);
    delay(750);
  } else {
    // turn LEDs off:
    digitalWrite(ledPin, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    
  }
}
