#ifndef DiceInterface_h
#define DiceInterface_h

#include "Config.h"

/**
   The abstract class DiceInterface. Every depiction method will be of this type.
*/
class DiceInterface {
  public:
    /**
       Shows the given number.
       @param digit - number to show
    */
    virtual void showDigit(int digit) = 0;
    /**
       Sets all LEDs to LOW state.
    */
    virtual void clearLED() = 0;
    /**
       rolls the type-specific start animation
    */
    virtual void startAnimation() = 0;

};

/**
   Creates a new dice.
   Depending on the integer given, it will return
   a specific type of dice (i.e. traditional)

   @param kind - integer defining the depiction method.
   @return the new dice.
*/
DiceInterface* createDice(int kind);

/**
   Represents a traditional dice layout
*/
class traditional: public DiceInterface {
  public:
    void showDigit(int digit);
    void startAnimation();
    traditional();

  private:

    /**
       Will be called by showDigit, sets all pins in the array to HIGH.
       @param pins[] - The array of Pins to set to HIGH
       @param size - size of the array
    */
    void printDigit(int pins[], int size);
    void clearLED();

    /**
       Constants defining the LED layouts of the different digits.
    */
    static const int digit1[];
    static const int digit2[];
    static const int digit3[];
    static const int digit4[];
    static const int digit5[];
    static const int digit6[];
    static const int allLED[];
};

/**
   Represents a sevenSegment display
*/
class sevenSegment: public DiceInterface {
  public:
    void showDigit(int digit);
    void startAnimation();
    sevenSegment();

  private:

    /**
       Will be called by showDigit, sets all pins in the array to HIGH.
       @param pins[] - The array of Pins to set to HIGH
       @param size - size of the array
    */
    void printDigit(int pins[], int size);
    void clearLED();

    /**
       Constants defining the LED layouts of the different digits.
    */
    static const int digit1[];
    static const int digit2[];
    static const int digit3[];
    static const int digit4[];
    static const int digit5[];
    static const int digit6[];
    static const int allLED[];


};

/**
   Shows the digits in binary code.
*/
class binary: public DiceInterface {
  public:
    void showDigit(int digit);
    void startAnimation();
    binary();

  private:

    /**
         Will be called by showDigit, sets all pins in the array to HIGH.
         @param pins[] - The array of Pins to set to HIGH
         @param size - size of the array
    */
    void printDigit(int pins[], int size);
    void clearLED();

    /**
       Constants defining the LED layouts of the different digits.
    */
    static const int digit1[];
    static const int digit2[];
    static const int digit3[];
    static const int digit4[];
    static const int digit5[];
    static const int digit6[];
    static const int allLED[];


};





#endif
