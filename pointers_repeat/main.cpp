#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print1(const vector<int> *const v) {
	for (auto n : *v)
		cout << n << " ";
	cout << endl;
}

void print2(int *const a, size_t vect_size) {
	for (size_t i{ 0 }; i < vect_size; ++i) {
		if (a[i] > 3)
			a[i] = 100;
		cout << a[i] << " ";
	}
	cout << endl;
}

constexpr long int fib(int n)
{
	return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

void swap(int *a, int *b) {
	int temp{ *a };
	*a = *b;
	*b = temp;
}

int main()
{
/*
	vector<int> v{ 1,5,8,9 };
	print1(&v);

	int a[]{ 1,2,3,4,10 };
	print2(a, 5);

	cout << "\nFibonacci computation:";
	const long int res = fib(40);
	cout << res;
*/
	
	int arr[]{ 2,4,6,8 };
	int *ptr_arr{ nullptr };

	ptr_arr = arr;

	for (size_t i{ 0 }; i < 4; ++i)
		cout << *(ptr_arr+i) << " ";
	cout << endl;

	
	/*
	cout << "a = " << a << ", b = " << b << endl;
	swap(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;
	*/

	cout << endl;
	return 0;
}