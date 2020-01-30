#include<iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int> vect{ 4,5,6,9,8,7 };
	std::vector<int>::iterator ptr;

	std::cout << "The vector elements are:" << std::endl;
	for (ptr = vect.begin(); ptr < vect.end(); ptr++)
		std::cout << *ptr << " ";
	std::cout << std::endl;

	return 0;
}
