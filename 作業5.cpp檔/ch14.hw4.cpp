#include<iostream>
#include"UniversityStaff.h"
#include"Student.h"
#include"ScienceStudent.h"
using namespace std;

int main()
{
	string name, proctor, displine, course;
	int number;
	cout << "Enter the university's name>";
	cin >> name;
	cout << "Enter the registration number>";
	cin >> number;

	cin.clear();
	cin.ignore(1024, '\n');
	cout << "Enter the displine>";
	cin >> displine;
	cout << "Enter the course>";
	cin >> course;

	ScienceStudent user(name, number, displine, course);

	user.setProctor();
	cout << "The universitys name is " << user.getName() << endl;
	cout << "The registration number is " << user.getNumber() << endl;
	cout << "The proctor's name is " << user.getProctorName() << endl;
	cout << "The science displine is " << user.getDiscipline() << endl;
	cout << "The undergraduate or postgraduate course is " << user.getCourse() << endl;

	system("pause");
	return 0;
}