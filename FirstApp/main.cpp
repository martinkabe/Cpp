#include <iostream>
#include <string>
#include <vector>
#include "BMI.h"

using namespace std;

void fillVector(vector<BMI>&);
void printVector(vector<BMI>&);

int main() {
	
	vector<BMI> myClass;
	fillVector(myClass);
	printVector(myClass);
	

	return 0;
}

void fillVector(vector<BMI>& newClass) {
	string name;
	int height;
	double weight;

	cout << "How many people you wanna measure? ";
	int classSize;
	cin >> classSize;

	for (int i = 0; i < classSize; i++)
	{
		cout << "Enter person name: ";
		cin >> name;
		cout << "Enter person height: ";
		cin >> height;
		cout << "Enter person weight: ";
		cin >> weight;

		BMI newPerson(name, height, weight);
		newClass.push_back(newPerson);
		cout << endl;
	}
	cout << endl;
}

void printVector(vector<BMI>& myVector) {
	int size = myVector.size();

	for (int i = 0; i < size; i++)
	{
		cout << "Person name " << myVector[i].GetName() << endl;
	}
}
