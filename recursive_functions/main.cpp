#include <iostream>
#include <vector>
#include <string>

using namespace std;


unsigned long long factorial(unsigned long long n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n) {
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned long long fibonacci_2(unsigned long long n) {
	unsigned long long actual{ 0 };
	unsigned long long prev_1{ 1 };
	unsigned long long prev_2{ 0 };
	for (unsigned long long i{ 0 }; i < (n-1); ++i) {
		actual = prev_1 + prev_2;
		prev_2 = prev_1;
		prev_1 = actual;
	}
	return actual;
}

double amount_accumulated(double n) {
	if (n <= 1)
		return 0.01f;
	return 2 * amount_accumulated(n - 1);
}

int main()
{
	/*
	cout << "Factorial: " << factorial(8) << endl;
	cout << "Fibonacci: " << fibonacci(40) << endl;
	cout << "Fibonacci_2: " << fibonacci_2(100) << endl;
	*/

	cout << "Penny accumulated is: " << amount_accumulated(25);

	return 0;
}
