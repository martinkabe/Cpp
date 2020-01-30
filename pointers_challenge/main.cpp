#include <iostream>
#include <string>

using namespace std;

void print(const int *const a, int size) {
	cout << "[ ";
	for (int i{ 0 }; i < size; ++i)
		cout << a[i] << " ";
	cout << " ]" << endl;
}

int *apply_all(const int *const arr1, size_t size_1, const int *const arr2, size_t size_2) {
	int *new_array{ nullptr };

	new_array = new int[size_1 * size_2];
	int position{ 0 };
	for (size_t i{ 0 }; i < size_2; ++i) {
		for (size_t j{ 0 }; j < size_1; ++j) {
			new_array[position] = arr1[j] * arr2[i];
			++position;
		}
	}
	return new_array;
}

int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	cout << "Array 1: ";
	print(array1, 5);

	cout << "Array 2: ";
	print(array2, 3);

	cout << "apply_all function:" << endl;

	int *results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t result_size{ array1_size *array2_size };

	cout << "Result is: ";
	print(results, result_size);

	cout << endl;

	return 0;
}