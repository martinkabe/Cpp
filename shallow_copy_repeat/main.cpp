#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Shallow
{
private:
	int *data;

public:
	int get_data_value() { return *data; }
	int set_data_value(int d) { *data = d; }

	// constructor
	Shallow(int d);
	// copy constructor
	Shallow(const Shallow &source);
	// destructor
	~Shallow();

};

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow &source)
	: data{source.data}
{
	cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow() {
	delete data;
	cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) {
	cout << s.get_data_value() << endl;
}

int main()
{
	Shallow obj1{ 100 };
	display_shallow(obj1);

	Shallow obj2{ obj1 };

	obj2.set_data_value(1000);

	return 0;
}
