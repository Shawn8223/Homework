#include <iostream>
#include <cstdlib>
#include "LoadedDice.h"

using namespace std;

LoadedDice::LoadedDice()
{
	numSides = 6;
	srand(time(NULL));
}

LoadedDice::LoadedDice(int numSides)
{
	this->numSides = numSides;
	srand(time(NULL));

}

//returns the result of rolling the dice once.
int LoadedDice::rollDice() const
{
	int p = 0;
	p = rand() % 2;

	if (p == 1)
	{
		return numSides;
	}
	else
	{
		return (rand() % numSides + 1);
	}
	
}

