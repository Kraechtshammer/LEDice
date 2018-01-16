#ifndef Config_h
#define Config_h

/* Defines the Pin that the Button is connected to. Change if necessary */
#define BUTTON 10

/** Defines the type of number representation:
*  0 - traditional 
*  1 - seven segment display
*  2 - bit display
*  default - traditional 
**/
#define DEPICTION 2

/* These define the Pins for the LEDs. They are arranged like this:
  traditional       seven Segment       binary
        1   2         1 
        3 4 5       2   3
        6   7         4 
                    5   6
                      7
  change the Pins if you have another configuration. */
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8

/* This defines the maximum and minimum numbers for random number generation */
#define RANDOM_MIN 1
#define RANDOM_MAX 6

/* Defines the Pin to be used for randomness. Use an unused analog Pin! */
#define RANDOM_PIN 3
#endif