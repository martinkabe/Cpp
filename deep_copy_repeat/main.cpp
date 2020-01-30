#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Deep
{
private:
	int *data;
public:
	Deep(int d);
	Deep(const Deep &source);
	~Deep();

	void set_data_value(int d) { *data = d; }
	int get_data_value() const { return *data; }
};

Deep::Deep(int d)
{
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
{
	data = new int;
	*data = *source.data;
	cout << "Copy constructor - deep" << endl;
}

Deep::~Deep()
{
	delete data;
	cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s)
{
	cout << s.get_data_value() << endl;
}

int main()
{
	Deep obj1{ 100 };
	display_deep(obj1);

	Deep obj2{ obj1 };
	display_deep(obj2);

	obj2.set_data_value(1000);

	return 0;
}