#include <iostream>
#include <vector>
#include "functions_prototypes.h"

void menu() {
	cout << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display smallest number" << endl;
	cout << "L - Display largest number" << endl;
	cout << "F - Find a number" << endl;
	cout << "Q - Quit" << endl;
}

char get_selection() {
	cout << "\nEnter your choice: ";
	char selection{};
	cin >> selection;
	return toupper(selection);
}

void display_numbers(const vector<double> &v)
{
	if (v.size() == 0) {
		cout << "\nElements in vector: []";
	}
	else {
		cout << "Elements in vector: [ ";
		for (double n : v)
			cout << n << " ";
		cout << " ]";
	}
	cout << endl;
}

void add_number(vector<double>& v)
{
	double num{};
	cout << "\nGive me a number you'd like to add into current vector: ";
	cin >> num;
	v.push_back(num);
	cout << "\nNumber " << num << " has been added into current vector." << endl;
}

void calculater_mean(const vector<double> &v)
{
	if (v.size() > 0) {
		double sum{};
		for (double n : v)
			sum += n;
		cout << "\nMean is: " << sum / static_cast<double>(v.size()) << endl;
	}
	else
	{
		cout << "\nCannot compute mean from 0 values!" << endl;
	}
}

void return_smallest_number(const vector<double> &v)
{
	if (v.size() > 0) {
		double smallest{ v[0] };
		for (double n : v)
			if (n < smallest)
				smallest = n;
		cout << "\nSmallest number in vector is: " << smallest << endl;
	}
	else
	{
		cout << "\nVector shoudn't be empty!" << endl;
	}
}

void return_largest_number(const vector<double> &v)
{
	if (v.size() > 0) {
		double largest{ v[0] };
		for (double n : v)
			if (n > largest)
				largest = n;
		cout << "\nLargest number in vector is: " << largest << endl;
	}
	else
	{
		cout << "\nVector shoudn't be empty!" << endl;
	}
}

void find_number(const vector<double> &v)
{
	if (v.size() > 0) {
		double num{};
		cout << "\nGive me a number you need you find in current vector: ";
		cin >> num;
		bool found{ false };
		for (double n : v)
			if (n == num) {
				cout << "\nNumber " << num << " has been found!" << endl;
				found = true;
			}
		if (!found)
			cout << "\nNumber " << num << " hasn't been found!" << endl;
	}
	else
	{
		cout << "\nVector shoudn't be empty!" << endl;
	}
}

void quit()
{
	cout << "\nI'm leaving the program, bye!" << endl;
}

void unknown()
{
	cout << "\nYou can enter only P, A, M, S, L, F, Q letters!" << endl;
}


