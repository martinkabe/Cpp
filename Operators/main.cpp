#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
	
	int counter{ 0 };
	int result{ 0 };

	cout << "Counter is " << result << endl;
	cout << "Result is " << result << endl;

	cout << endl;

	result = ++counter;
	cout << "++counter: Counter is " << counter << endl;
	cout << "Result is " << result << endl;

	cout << endl;

	result = counter++;
	cout << "counter++: Counter is " << counter << endl;
	cout << "Result is " << result << endl;
	*/

	/*
	
	int num1{};
	int num2{};

	cout << "Give me two numbers: ";
	cin >> num1 >> num2;

	cout << endl;

	(num1 > num2) ? (cout << num1 << " is greater than " << num2) : (cout << num1 << " is less or equal to " << num2) << endl;
	
	cout << endl;
	*/
	
	int cents{};
	int reminder{};

	cout << "Enter an amount in cents: ";
	cin >> cents;
	cout << endl;

	cout << "You can provide this change as follows: " << endl;

	reminder = cents % 100;
	cout << "dollars: " <<  cents / 100 << endl;
	
	cout << "quarters: " << reminder / 25 << endl;
	reminder %= 25;

	cout << "dimes: " << reminder / 10 << endl;
	reminder %= 10;

	cout << "nickels: " << reminder / 5 << endl;
	reminder %= 5;

	cout << "pennies: " << reminder / 1 << endl;

	cout << endl;

	/*
	int x = 10, y = 3, z = 6;
	cout << (x == y) << " ";
	cout << (z <= x) << " ";
	cout << (y != z) << " ";
	cout << (x > y && z < x) << " ";
	cout << (y < x && z < x) << " ";
	cout << (x < y || z < 0) << endl;
	*/

	/*
	int x = 5;
	int y = -2;
	int z = 2;
	cout << (x + y * z <= x + z * z - x) << endl;
	*/
	
	double  a = 100;
	int b = 12;
	int x = b % 3;
	double  y = a / b;
	int z = a / b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	return 0;
}