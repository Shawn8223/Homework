#ifndef ELF_H
#define ELF_H

#include<iostream>
#include<string>
#include"Creature.h"
using namespace std;

class Elf :public Creature {
public:
	Elf();
	Elf(int newStrength, int newHit);
	int getDamage();
private:
	string getSpecies();
};

#endif