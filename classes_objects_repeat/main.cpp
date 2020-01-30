#include <iostream>
#include <string>

class Test
{
private:
	int* num;
	int size;
public:
	// constructor
	Test(int *n, int size)
		: num{nullptr}
	{
		num = new int[size];
		std::copy(n, n+size, num);
		std::cout << "Dynamically allocated address in memory (constructor): " << &num << std::endl;
	}
	// destructor
	~Test() {
		std::cout << "Destructor is freeing memory." << std::endl;
		std::cout << "Freeing up dynamically allocated address in memory (destructor): " << &num << std::endl;
		delete [] num;
	}
	// print num variable using pointer arithmetic
	void display_values(int size) {
		for (size_t i{ 0 }; i < size; ++i) {
			std::cout << num[i] << std::endl;
		}
	}
};

int main()
{
	int a[5] { 8,10,3,9,25 };
	Test t1(a, 5);
	t1.display_values(5);

	return 0;
}
