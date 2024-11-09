#ifndef LoadedDice_H
#define LoadedDice_H

#include <iostream>
#include "Dice.h"
using namespace std;

class LoadedDice :public Dice
{
public:
	LoadedDice();
	LoadedDice(int numSides);
	virtual int rollDice() const override;
protected:
	int numSides;
};

#endif // LoadedDice_H
