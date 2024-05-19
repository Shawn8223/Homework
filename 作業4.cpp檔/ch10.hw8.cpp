#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Television {
public:

	//the constructor of the class
	Television() :dimension(0) {};

	//the constructor of the class
	Television(string displayType, double dimension, vector <string> connectivitySupport) :displayType(displayType), dimension(dimension), connectivitySupport(connectivitySupport) {};
	Television(const Television& t);

	//setter of displayType
	void setDisplayType(string displayType) { this->displayType = displayType; };

	//setter of dimension
	void setDimension(double dimension) { this->dimension = dimension; };

	//setter of connectivitySupport
	void setConnectivitySupport(vector <string> connectivitySupport) { this->connectivitySupport = connectivitySupport; };

	//getter of displayType
	string getDisplayType() { return displayType; };

	//getter of dimension
	double getDimension() { return dimension; };

	//getter of connectivitySupport
	vector <string> getConnectivitySupport() { return connectivitySupport; };
	void inputData();
	void outputData();
private:
	string displayType;
	double dimension;
	vector <string> connectivitySupport;
};

//copy constructor of the class
Television::Television(const Television& t) {
	displayType = t.displayType;
	dimension = t.dimension;
	connectivitySupport = t.connectivitySupport;
}

//let user input the imformation
void Television::inputData() {
	string mode;

	cout << "Enter the display type of the television => ";
	cin >> displayType;

	do {
		cout << "Enter the dimension of the television in inches => ";
		cin >> dimension;
	} while (dimension <= 0);

	cout << "Enter the different connectivity modes supported by the television (use -9999 to stop) => ";
	cin >> mode;
	while (mode != "-9999") {
		connectivitySupport.push_back(mode);
		cin >> mode;
	}
}

//output the imformation
void Television::outputData() {
	cout << "\nDisplay type: " << displayType << endl;
	cout << "Dimension: " << dimension << " inches" << endl;
	cout << "Connectivity modes: \n";
	for (int i = 0; i < connectivitySupport.size(); i++)
		cout << connectivitySupport[i] << endl;
	cout << "\n-----------------------------------\n\n";
}

int main() {
	Television television, television1;
	vector <Television> televisionCopy;
	int num, total, part;
	char costomization;
	string displayType, mode;
	double dimension;
	vector <string> connectivitySupport;

	//input the imformation for the first televisoin
	television.inputData();

	//output the imformation for the first televisoin
	television.outputData();

	do {
		cout << "Enter how many televisions do you want to copy => ";
		cin >> total;
	} while (total < 0);

	//copy the imformation
	for (int i = 0; i < total; i++) {
		television1 = television;
		televisionCopy.push_back(television1);

		//output the copy television imformation
		cout << "\nTelevision " << i + 2 << ":" << endl;
		televisionCopy[i].outputData();
	}

	//choose whether any costomization required
	cout << "Is costomization required for any television? (y or n) => ";
	cin >> costomization;
	while (costomization == 'y') {
		do {

			//choose which television to change
			cout << "Which television do you want to change => ";
			cin >> num;
		} while (num > total + 1);

		//choose which part to change
		do {
			cout << "Which part do you want to change (display type use 1 ,dimension use 2 ,connectivitySupport use 3) => ";
			cin >> part;
		} while (part < 1 || part > 3);

		//change the display type
		if (part == 1) {
			cout << "Enter the display type of the television => ";
			cin >> displayType;
			televisionCopy[num - 2].setDisplayType(displayType);
		}

		//change the dimension
		else if (part == 2) {
			do {
				cout << "Enter the dimension of the television in inches => ";
				cin >> dimension;
			} while (dimension <= 0);
			televisionCopy[num - 2].setDimension(dimension);
		}

		//change the different connectivity modes supported by
		else {
			cout << "Enter the different connectivity modes supported by the television (use -9999 to stop) => ";
			cin >> mode;
			while (mode != "-9999") {
				connectivitySupport.push_back(mode);
				cin >> mode;
			}
			televisionCopy[num - 2].setConnectivitySupport(connectivitySupport);
		}

		//output the imformation after change
		cout << "The information for the television " << num << ":" << endl;
		televisionCopy[num - 2].outputData();

		cout << "Is costomization required for any television? (y or n) => ";
		cin >> costomization;
	}

	//output all the imformation of televisions
	cout << "Television 1:" << endl;
	television.outputData();
	for (int i = 0; i < total; i++) {
		cout << "\nTelevision " << i + 2 << ":" << endl;
		televisionCopy[i].outputData();
	}


	system("pause");
	return 0;
}