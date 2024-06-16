#ifndef DEMON_H
#define DEMON_H

#include<iostream>
#include<string>
#include"Creature.h"
using namespace std;

class Demon :public Creature {
public:
	Demon();
	Demon(int newStrength, int newHit);

};

#endif