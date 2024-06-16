#include<iostream>
#include<string>
#include"Creature.h"
using namespace std;

Creature::Creature()
	:strength(10), hitpoints(10)
{
}

Creature::Creature(int newStrength, int newHit)
	:strength(newStrength), hitpoints(newHit)
{
}

void Creature::setStrength(int s)
{
	strength = s;
}

void Creature::setHit(int h)
{
	hitpoints = h;
}

int Creature::getStrength() const
{
	return strength;
}

int Creature::getHit() const
{
	return hitpoints;
}

string Creature::getSpecies()
{
	return "ERROR";
}
