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
		int arr1[]{ 1, 2, 3, 4, 5, 6 };
		int arr2[]{ 1, 2, 3, 4, 5, 6 };
		int arr3[]{ 1, 2, 3 };

		Matrix test1{ 2, 3, arr1 };
		Matrix test2{ 3, 2, arr2};
		Matrix test3{ 3, 1, arr3 };

		Matrix empty1 = test1 * test2;
		cout << empty1 << endl;
		Matrix empty2 = test1 * test3;
		cout << empty2 << endl;

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
