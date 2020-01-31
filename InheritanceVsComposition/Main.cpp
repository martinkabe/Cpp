#include <iostream>
#include "Matrix.h"
#include <vector>

using std::cout;
using std::endl;

int main()
{
	std::vector<Matrix> vec;

	int arr[]{ 1,2,3,4 };
	vec.push_back(Matrix{ 2,2, arr });

	
	try
	{
		int arr1[]{ 1,2,3,4,5,6 };
		int arr2[]{ 1,2,3,4 };
		Matrix test1{ 2, 3, arr1 };
		Matrix test2{ 2, 2, arr1 };
		Matrix empty = test1 * test2;
		cout << empty << endl;
	}
	catch (const std::invalid_argument& ex)
	{
		cout << "\nAn exception has been thrown:\n" << ex.what() << endl;
	}
	
	/*
	Matrix empty;
	empty = test1 * test1 * test1;
	cout << empty << endl;
	*/
}