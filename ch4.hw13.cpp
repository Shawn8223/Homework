#include <iostream>
#include <iomanip>
using namespace std;

double convertToMPH(int minutes, int seconds);
double convertToMPH(double kilometers);

int main(void)
{
	int minutes = 0, seconds=0;
	double kilometers = 0;
	double mph = 0;

	cout << "Enter your speed in terms of a pace\n"
		<< " (minutes and seconds per mile, such as¡u5:30 mile¡v\n"
		<< " or in terms of kilometers per hour(kph).\n";

	cin >> minutes >> seconds;
	mph = convertToMPH(minutes, seconds);

	cout << "Your speed in miles per hour is:" << fixed << setprecision(3) << mph << endl;

	return 0;

}

double convertToMPH(int minutes, int seconds)
{
	return 3600.0 / (minutes * 60.0 + seconds);
}

double convertToMPH(double kilometers)
{
	return kilometers / 1.61;
}
