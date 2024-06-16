#include "ScienceStudent.h"

ScienceStudent::ScienceStudent()
	:Student(), discipline("No discipline yet"), course("No course yet")
{
}

ScienceStudent::ScienceStudent(string newUniversity, int newRegistration, string newDiscipline, string newCourse)
	:Student(newUniversity, newRegistration), discipline(newDiscipline), course(newCourse)
{
}

void ScienceStudent::setDiscipline(string newDiscipline)
{
	discipline = newDiscipline;
}

void ScienceStudent::setCourse(string newCourse)
{
	course = newCourse;
}

string ScienceStudent::getDiscipline() const
{
	return discipline;
}

string ScienceStudent::getCourse() const
{
	return course;
}
