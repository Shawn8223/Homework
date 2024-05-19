#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class Subscriber {
public:

	//the constructor of the class
	Subscriber() :numChannels(0) { channalList = new vector<string>(); };

	//the constructor of the class
	Subscriber(string name) :name(name), numChannels(0) { channalList = new vector<string>(); };

	//the deconstructor of the class
	~Subscriber() { delete channalList; };

	//getter of name
	string getName() { return name; };

	//getter of numChannels
	int getNumChannels() { return numChannels; };

	//getter of channalList
	vector<string>* getChannalList() { return channalList; };

	//setter if name
	void setName(string name) { this->name = name; };

	//setter of numChannels
	void setNumChannels(int numChannels) { this->numChannels = numChannels; };

	//setter of channalList
	void setChannalList(vector<string> channalList) { this->channalList = &channalList; };
	void inputData();
	void outputData();
	void resetData();
	vector<string> operator =(vector<string> newList);

private:
	string name;
	int numChannels;
	vector<string>* channalList;
};

//let user input the information
void Subscriber::inputData() {
	string temp;

	//input subscriber's name
	cout << "Enter the subscriber's name => ";
	getline(cin, name);

	//input the name of the channel
	cout << "Enter the names of the channels the subscriber subscribes to (use -9999 to stop) => \n";
	getline(cin, temp);

	while (temp != "-9999") {
		channalList->push_back(temp);
		getline(cin, temp);
	}

	//calculate the number of the channels
	numChannels = channalList->size();

}

//output the imformation
void Subscriber::outputData() {
	cout << "The subscriber's name: " << name << endl;
	cout << "The number of channels the subscriber subscribes to: " << numChannels << endl;
	cout << "The channel names the subscriber subscribes to: " << endl;
	for (int i = 0; i < numChannels; i++)
		cout << channalList->at(i) << endl;
}

//reset number of channals to 0 and channalList to an empty list
void Subscriber::resetData() {
	numChannels = 0;
	channalList->clear();
}

//overloded the operator = to copy the list
vector<string> Subscriber::operator =(vector<string> newList) {
	string tmp;
	for (int i = 0; i < numChannels; i++) {
		tmp = channalList->at(i);
		channalList->push_back(tmp);
	}
	return newList;
}

int main() {
	Subscriber subs, newsubs;
	char copy;
	vector <string>* list;

	//input the imformation
	subs.inputData();

	//output the imformation
	subs.outputData();
	cout << "\n----------------------------------------------\n\n";

	//choose whether to copy a list
	cout << "Do you want to copy the channel list? (y or n) => ";
	cin >> copy;
	if (copy == 'y') {

		//copy the list
		list = subs.getChannalList();

		//print the list
		cout << "The new channel list is: \n";
		for (int i = 0; i < list->size(); i++) {
			cout << list->at(i) << endl;
		}
	}

	//reset the list
	subs.resetData();
	system("pause");
	return 0;
}
