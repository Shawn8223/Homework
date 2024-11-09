#ifndef CREATURE_H
#define CREATURE_H

#include<iostream>
#include<string>
using namespace std;

class Creature {
public:
	Creature();
	Creature(int newStrength, int newHit);
	void setStrength(int s);
	void setHit(int h);
	int getStrength() const;
	int getHit() const;

private:
	int strength;
	int hitpoints;
	string getSpecies();
};

#endif