#include<iostream>
#include<string>
#include"Elf.h"
using namespace std;

Elf::Elf()
	:Creature(10, 10)
{
}

Elf::Elf(int newStrength, int newHit)
	:Creature(newStrength, newHit)
{
}

int Elf::getDamage()
{
	int damage;
	damage = (rand() % getStrength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!\n";

	if ((rand() % 10) == 0)
	{
		cout << "Magical attack inflicts " << damage <<
			" additional damage points!\n";
		damage = damage * 2;
	}


	return damage;
}

string Elf::getSpecies()
{
	return "Elf";
}
