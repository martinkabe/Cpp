#include <iostream>
#include <vector>
#include <string>

class TestClass
{
public:
	TestClass() {};
	TestClass(std::string, int);
	~TestClass();

	std::vector<TestClass> vect;

	void store_vector(TestClass t) {
		TestClass temp{ t.name, t.age };
		vect.push_back(temp);
		std::cout << "Object with name = " << temp.name << " and age = " << temp.age << " added." << std::endl;
	}

	void print_vector(std::vector<TestClass> vect) {
		for (TestClass t : vect)
			std::cout << "Name: " << t.name << "; age: " << t.age << std::endl;
	}

private:
	std::string name;
	int age;
};

TestClass::TestClass(std::string name, int age)
{
	this->name = name;
	this->age = age;
}

TestClass::~TestClass()
{
}

int main()
{
	TestClass t;
	t.store_vector(TestClass{ "Martin",35 });
	t.store_vector(TestClass{ "Michal",35 });
	t.store_vector(TestClass{ "Evicka",31 });

	std::cout << std::endl;

	t.print_vector(t.vect);

	return 0;
}
