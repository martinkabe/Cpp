#include <iostream>
#include <string>

using namespace std;

int *largest_int(int *int_ptr_1, int *int_ptr_2) {
	return (*int_ptr_1 > *int_ptr_2) ? int_ptr_1 : int_ptr_2;
}

int* create_array(size_t size, int init_value = 0)
{
	int* new_storage = new int[size];
	for (size_t i{ 0 }; i < size; i++)
		*(new_storage + i) = init_value + i;
	return new_storage;
}

void display(const int* const v, size_t size)
{
	for (size_t i{ 0 }; i < size; i++)
		cout << v[i] << " ";
	cout << endl;
}

int main()
{
	/*
	int a{ 10 }, b{ 20 };
	int *ptr{ nullptr };

	cout << "a = " << a << ", b = " << b << endl;
	ptr = largest_int(&a, &b);
	cout << "Larger is " << *ptr << endl;
	*/
	
	int* my_array = create_array(100, 20);

	display(my_array, 100);

	delete[] my_array;

	return 0;
}
