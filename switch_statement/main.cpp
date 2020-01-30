#include <iostream>
#include <string>

using namespace std;

int main()
{

	/*
	int number{};
	cout << "Enter the number: ";
	cin >> number;
	cout << endl;

	switch (number)
	{
	case 1: cout << "1 selected"; break;
	case 2: cout << "2 selected"; break;
	case 3: cout << "3 selected"; break;
	case 4: cout << "4 selected"; break;
	default: cout << "1,2,3,4 NOT selected" << endl;
	}
	*/
	int day_code{};
	switch (day_code)
	{
	case 0: cout << "Sunday"; break;
	case 1: cout << "Monday"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	default: cout << "Error - ellegal day code";
	}

	


	return 0;
}
