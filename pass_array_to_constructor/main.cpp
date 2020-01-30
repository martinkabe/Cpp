#include <iostream>

class TestClass
{
private:
	int* data;
	int size;

public:
	TestClass();
	TestClass(int*, int);
	~TestClass();
	
	void print_data(int);
	void set_size(int s) { this->size = s; };
};

TestClass::TestClass() {}

TestClass::TestClass(int* d, int size)
	: data(d)
{
	data = new int[size];
	std::copy(d, d + size, data);
}

TestClass::~TestClass() {
	std::cout << "Destructor is freeing data." << std::endl;
	delete[] data;
	data = NULL;
}

void TestClass::print_data(int size) {
	for (size_t i{ 0 }; i < size; ++i) {
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int size_array = 5;

	int arr[]{ 5,8,9,6,5 };
	TestClass* t1 = new TestClass(arr, size_array);

	t1->print_data(size_array);

	delete t1;

	return 0;
}