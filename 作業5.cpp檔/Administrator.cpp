#include <iostream>
#include <string>
#include "administrator.h"
using namespace std;

namespace SavitchEmployees
{
	Administrator::Administrator()
		: annualSalary(0), adminTitle("No Title yet"), company("No company area yet"), supervisor("No supervisor yet")
	{

	}

	Administrator::Administrator(const string& theName, const string& theNumber, double theWeeklySalary)
		: SalariedEmployee(theName, theNumber, theWeeklySalary)
	{
		annualSalary = theWeeklySalary * 365.0 / 7.0;
	}

	void Administrator::setAnnualSalary(double theAnnualSalary)
	{
		annualSalary = theAnnualSalary;
	}

	void Administrator::setAdminTitle(const string& theAdminTitle)
	{
		adminTitle = theAdminTitle;
	}

	void Administrator::setCompanyArea(const string& theCompany)
	{
		company = theCompany;
	}

	void Administrator::setSupervisor(const string& theSupervisor)
	{
		supervisor = theSupervisor;
	}

	double Administrator::getAnnualSalary() const
	{
		return annualSalary;
	}

	void Administrator::input()
	{
		string enteredTitle, enteredComArea, enteredSupervisor;

		cout << "Enter the administrator title: \n";
		cin >> enteredTitle;
		cout << "Enter the company area of responsibility: \n";
		cin >> enteredComArea;
		cout << "Entered the name of supervisor: \n";
		cin >> enteredSupervisor;

		setAdminTitle(enteredTitle);
		setCompanyArea(enteredComArea);
		setSupervisor(enteredSupervisor);
	}

	void Administrator::print()
	{
		printCheck();
	}

	void Administrator::printCheck()
	{
		setNetPay(annualSalary);
		cout << "\n__________________________________________________\n";
		cout << "Pay to the order of " << getName() << endl;
		cout << "Administrator Title: " << adminTitle << endl;
		cout << "Company area of responsibility " << company << endl;
		cout << "Supervisor Name: " << supervisor << endl;
		cout << "The sum of " << getNetPay() << " Dollars\n";
		cout << "_________________________________________________\n";
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << getSsn() << endl;
		cout << "Salaried Employee. Regular Pay: " << getSalary() << endl;
		cout << "Annual Salary: " << annualSalary << endl;
		cout << "_________________________________________________\n";
	}
}//SavitchEmployees