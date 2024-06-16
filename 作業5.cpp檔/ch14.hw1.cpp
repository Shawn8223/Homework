#include<iostream>
#include <string>
#include "hourlyemployee.h"
#include "salariedemployee.h"
#include "administrator.h"
using namespace std;
using SavitchEmployees::HourlyEmployee;
using SavitchEmployees::SalariedEmployee;
using SavitchEmployees::Administrator;

int main()
{
	// Create an instance of HourlyEmployee
	HourlyEmployee joe;
	joe.setName("Mighty Joe");
	joe.setSsn("123-45-6789");
	joe.setRate(20.50);
	joe.setHours(40);
	cout << "Check for " << joe.getName() << " for " << joe.getHours() << " hours.\n";
	joe.printCheck();
	cout << endl;

	// Create an instance of SalariedEmployee
	SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
	cout << "Check for " << boss.getName() << endl;
	boss.printCheck();

	// Create an instance of Administrator
	Administrator admin;
	string name, ssn;
	double weeklySalary;

	// Prompt the user to enter the information
	cout << "Entered the name: \n";
	cin >> name;
	cout << "Entered the ssn number: \n";
	cin >> ssn;
	cout << "Entered the weekly salary: \n";
	cin >> weeklySalary;

	// Initialize the Administrator object with the provided details
	admin = Administrator(name, ssn, weeklySalary);
	admin.input();
	admin.print();
	system("pause");
	return 0;
}