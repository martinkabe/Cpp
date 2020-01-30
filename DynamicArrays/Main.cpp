#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void print_array(int* arr, int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
		cout << arr[i] << " [" << &arr[i] << "] ";
	cout << endl;
}

int main()
{

	int size_array = 10;
	int* ptr_int = new int[size_array];

	for (size_t i = 0; i < size_array; i++)
		ptr_int[i] = i + 1;

	print_array(ptr_int, size_array);

	delete[] ptr_int;
	ptr_int = nullptr;
}