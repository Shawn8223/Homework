#include <iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;
namespace SavitchEmployees
{
	SalariedEmployee::SalariedEmployee() :
		Employee(), salary(0)
	{
		//deliberately empty
	}

	SalariedEmployee::SalariedEmployee(const string& newName, const string& newNumber, double newWeeklyPay)
		: Employee(newName, newNumber), salary(newWeeklyPay)
	{
		//deliberately empty
	}

	double SalariedEmployee::getSalary() const
	{
		return salary;
	}

	void SalariedEmployee::setSalary(double newSalary)
	{
		salary = newSalary;
	}

	void SalariedEmployee::printCheck()
	{
		setNetPay(salary);
		cout << "\n__________________________________________________\n";
		cout << "Pay to the order of " << getName() << endl;
		cout << "The sum of " << getNetPay() << " Dollars\n";
		cout << "_________________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << getSsn() << endl;
		cout << "Salaried Employee. Regular Pay: " << salary << endl;
		cout << "_________________________________________________\n";
	}
} //SavitchEmployees