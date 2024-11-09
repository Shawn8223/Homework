#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

Student::Student()
	:university("No name yet"), registration(0)
{
}

Student::Student(string newUniversity, int newRegistration)
	:university(newUniversity), registration(newRegistration)
{
}

void Student::setName(string theUniversity)
{
	university = theUniversity;
}

void Student::setNumber(int newRegistration)
{
	registration = newRegistration;
}

void Student::setProctor()
{
	cin >> proctor;
}

string Student::getName() const
{
	return university;
}

int Student::getNumber() const
{
	return registration;
}

string Student::getProctorName()
{
	return proctor.getName();
}
