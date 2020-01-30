#include <iostream>
#include <cmath>

using namespace std;

double c_math_function() {
	double bill_total{ 102.78 };
	int number_of_guests{ 5 };
	return (bill_total / number_of_guests);
}


int main()
{

	cout << "The individual bill at location 1 will be $" << floor(c_math_function()) << endl;
	cout << "The individual bill at location 2 will be $" << round(c_math_function()) << endl;
	cout << "The individual bill at location 3 will be $" << ceil(c_math_function()*100)/100 << endl;


	return 0;
}

