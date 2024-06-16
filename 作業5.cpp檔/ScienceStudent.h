#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H

#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

class ScienceStudent :public Student
{
public:
	ScienceStudent();
	ScienceStudent(string newUniversity, int newRegistration, string newDiscipline, string newCourse);
	void setDiscipline(string newDiscipline);
	void setCourse(string newCourse);
	string getDiscipline() const;
	string getCourse() const;
private:
	string discipline;
	string course;

};

#endif