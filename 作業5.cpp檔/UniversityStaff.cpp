#include<iostream>
#include<string>
#include "UniversityStaff.h"
using namespace std;

UniversityStaff::UniversityStaff()
	:name("No name yet")
{
}

UniversityStaff::UniversityStaff(string theName)
	:name(theName)
{
}

UniversityStaff::UniversityStaff(const UniversityStaff& theObject)
	:name(theObject.getName())
{
}

string UniversityStaff::getName() const
{
	return name;
}

UniversityStaff& UniversityStaff::operator=(const UniversityStaff& rtSide)
{
	name = rtSide.getName();
	return *this;
}

istream& operator >> (istream& inStream, UniversityStaff& staffObject)
{
	string proctor;
	cout << "Enter the proctor's name>";
	inStream >> proctor;
	staffObject.name = proctor;
	return inStream;
}

ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject)
{
	outStream << "The proctor's name is " << staffObject.name;
	return outStream;
}
