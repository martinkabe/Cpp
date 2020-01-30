#include <iostream>
#include <vector>
#include <string>
#include "main.h"

using namespace std;

void double_data(int *int_value) {
	*int_value *= 2;
}

void swap(int*x, int* y)
{
	int temp{ *x };
	*x = *y;
	*y = temp;
}

int _main()
{
	int x{ 100 }, y{ 200 };
	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;

	swap(&x, &y);

	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;

	return 0;
}