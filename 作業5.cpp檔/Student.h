#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
#include"UniversityStaff.h"
using namespace std;

class Student {
public:
	Student();
	Student(string newUniversity, int newRegistration);
	void setName(string theUniversity);
	void setNumber(int newRegistration);
	void setProctor();
	string getName() const;
	int getNumber() const;
	string getProctorName();

private:
	string university;
	int registration;
	UniversityStaff proctor;
};


#endif