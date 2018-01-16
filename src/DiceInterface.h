#ifndef DiceInterface_h
#define DiceInterface_h

#include "Config.h"

class DiceInterface {
  public:
    virtual void showDigit(int digit) = 0;
};

DiceInterface* createDice(int kind);


class traditional: public DiceInterface {
  public:
    void showDigit(int digit);
  private:
    void printDigit(int pins[], int size);
    void clearLED();
    static const int digit1[]; 
    static const int digit2[]; 
    static const int digit3[]; 
    static const int digit4[]; 
    static const int digit5[]; 
    static const int digit6[]; 
    static const int allLED[];
};
class sevenSegment: public DiceInterface {
  public:
    void showDigit(int digit);
    private:
    void printDigit(int pins[], int size);
    void clearLED();
    static const int digit1[]; 
    static const int digit2[]; 
    static const int digit3[]; 
    static const int digit4[]; 
    static const int digit5[]; 
    static const int digit6[]; 
    static const int allLED[];
  
    
};
class binary: public DiceInterface {
  public:
    void showDigit(int digit);
    private:
    void printDigit(int pins[], int size);
    void clearLED();
    static const int digit1[]; 
    static const int digit2[]; 
    static const int digit3[]; 
    static const int digit4[]; 
    static const int digit5[]; 
    static const int digit6[]; 
    static const int allLED[];
  
    
};





#endif