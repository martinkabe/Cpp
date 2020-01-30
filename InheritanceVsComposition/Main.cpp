#include <iostream>
#include "Matrix.h"

using std::cout;
using std::endl;

int main()
{
	int arr1[]{ 1,2,3,4 };
	Matrix test1{2, 2, arr1};
	cout << test1 << endl;

	Matrix empty;
	empty = test1 * test1;
	cout << empty << endl;
}