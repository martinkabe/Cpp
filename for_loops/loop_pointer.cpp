#include <iostream>

using std::cout;
using std::endl;

void display(const int* const a, size_t size)
{
	for (size_t i{ 0 }; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int arr[]{ 5,8,7,9,10,11 };
	int* ptr_arr = arr;

	display(ptr_arr, 6);
}

