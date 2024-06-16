#include<iostream>
#include<string>
#include "Demon.h"
using namespace std;


Demon::Demon()
	:Creature(10, 10)
{
}

Demon::Demon(int newStrength, int newHit)
	:Creature(newStrength, newHit)
{
}

