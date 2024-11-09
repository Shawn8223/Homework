#ifndef HUMAN_H
#define HUMAN_H

#include<iostream>
#include<string>
#include"Creature.h"
using namespace std;

class Human :public Creature
{
public:
	Human();
	Human(int newStrength, int newHit);
	int getDamage();
private:
	string getSpecies();


};

#endif