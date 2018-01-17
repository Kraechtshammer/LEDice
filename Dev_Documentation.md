# Documentation for LEDice

author: Paul Garten

as in the manual, I will explain the mechanics of this library using the example of a D6, 
as it uses every feature of the library.

## Structure
### Config
In the [Config](LEDice/src/Config.h), we define pins for buttons, 
randomness (a random voltage from an unused pin is being used as a seed) 
and choose a method of depiction and MIN and MAX values for random numbers. 

### Random
The random class can be initialized with min and max integer values. 
Calling the function "getRandomNumber" generates a random number 
between the min and max values, using a seed read from the RandomPin. 
Every sixth call, a new seed will be set for extended randomness.

### DiceInterface
The Dice Interface is an abstract class that will be used to easily switch between 
the different depiction methods. By calling the createDice function, we receive an 
instance of the depiction method input as a parameter. 
These are of the type DiceInterface and as such, can all be used the exact same way.

The only function that can be called in these will be showDigit, which, as the name suggests, 
"prints" the number handed over.

Every depiction method implemented by me uses arrays to define the pins 
that have to be turnt on to call the different digits. 
They also have one array with every LED pin in it.

The showDigit function will hand over the task to a helper function which first turns 
off every pin and then turns on every pin for the respective number.

## Implementing a new depiction method
If you find yourself inventing a new method of showing digits, you will want to implement a way to use it.

First, you will have to define the class in [DiceInterface.h](LEDice/src/DiceInterface.h). 

Then, you should (for OCD purposes) create a dedicated file for that method. 
You will probably be able to copy a lot of code from my own methods and change these a bit 
(except if you do something completely alien).

After that, you should change the [createDice](LEDice/src/DiceInterface.cpp) 
function to instanciate your new class.

Finishing up, just change the DEPICTION parameter (and possibly some pins) in the [config](LEDice/src/Config.h).

If you found yourself using more or less than seven pins, change the initialization of pins in the LEDice.ino 
file to initialize these pins as outputs.
