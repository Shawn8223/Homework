#ifndef ADMINISTRATOR_H_
#define ADMINISTRATOR_H_
#include<iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;


namespace SavitchEmployees
{
	class Administrator : public SalariedEmployee
	{
	public:
		Administrator();
		Administrator(const string& theName, const string& theNumber, double theWeeklySalary);
		void setAnnualSalary(double theAnnualSalary);
		void setAdminTitle(const string& theAdminTitle);
		void setCompanyArea(const string& theCompany);
		void setSupervisor(const string& theSupervisor);
		double getAnnualSalary() const;
		void input();
		void print();
		void printCheck();
	protected:
		double annualSalary;
	private:
		string adminTitle;
		string company;
		string supervisor;
	};
}//SavitchEmployees

#endif // ADMINISTRATOR_H_