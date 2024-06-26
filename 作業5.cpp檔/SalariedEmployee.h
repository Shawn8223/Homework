#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include<iostream>
#include <string>
#include "employee.h"
using namespace std;

namespace SavitchEmployees
{
	class SalariedEmployee : public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary);
		double getSalary() const;
		void setSalary(double newSalary);
		void printCheck();
	private:
		double salary; //weekly
	};
} //SavitchEmployees
#endif //SALARIEDEMPLOYEE_H
