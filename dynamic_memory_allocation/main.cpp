#include <iostream>
#include <vector>

using namespace std;

int main()
{

	/*
	size_t size{ 0 };
	double *temp_ptr{ nullptr };

	cout << "\nHow many temps? ";
	cin >> size;

	temp_ptr = new double[size];
	cout << temp_ptr << endl;

	delete[] temp_ptr;
	*/

	/*
	int array_name[]{ 1,2,3,4 };
	int *name_ptr{ array_name };

	for (size_t i{ 0 }; i < 4; ++i)
		cout << *(name_ptr++) << " ";
	cout << endl;
	*/

	int scores[]{ 100,95,89,68,-1 };
	int *scores_ptr{ scores };

	while (*scores_ptr != -1) {
		cout << *scores_ptr++ << endl;
	}

	cout << endl;

	char c{};
	cout << "Size of character on my machine is: " << sizeof c << endl;

	return 0;
}