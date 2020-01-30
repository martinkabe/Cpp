#include <iostream>

class Cat
{
private:
	int* age;
	int* weight;
public:
	// constructor and destructor
	Cat();
	~Cat();

	// getters and setters
	void set_age(int age) { *this->age = age; }
	int get_age() { return *this->age; }

	void set_weight(int weight) { *this->weight = weight; }
	int get_weight() { return *this->weight; }
};

Cat::Cat()
	:age{ nullptr }, weight{ nullptr }
{
	age = new int(2);
	weight = new int(5);
}

Cat::~Cat()
{
	delete age;
	delete weight;
}

int main()
{
	Cat* c1 = new Cat();

	std::cout << "Cat has " << c1->get_age() << " years old" << std::endl;

	c1->set_age(10);

	std::cout << "Cat has " << c1->get_age() << " years old now" << std::endl;

	return 0;
}