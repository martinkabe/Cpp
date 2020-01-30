#include <iostream>
#include "stats.h"
#include <vector>
#include <typeinfo>

using namespace std;

void set_array(int a[], size_t size);

void set_array(int a[], size_t s) {
	for (size_t i{ 0 }; i < s; ++i)
		a[i] = 0;
}

int main()
{
	int numbers[] {1,2,3,4,5,6};

	// cout << "The average is " << mean(numbers) << endl;

/*
	cout << "Print original vector:" << endl;
	for (double v : numbers)
		cout << v << " ";

	set_array(numbers,6);

	cout << endl;

	cout << "Print changed vector:" << endl;
	for (double v : numbers)
		cout << v << " ";
*/
	
	cout << typeid(numbers).name() << endl;
	
	return 0;
}