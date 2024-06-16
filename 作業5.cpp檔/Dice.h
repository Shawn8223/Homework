#ifndef DICE
#define DICE

#include <iostream>
using namespace std;

class Dice
{
public:
	Dice();
	Dice(int numSides);
	virtual int rollDice()const;
protected:
	int numSides;
};

#endif // DICE
