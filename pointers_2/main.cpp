#include <iostream>

using std::string;
using std::cout;
using std::endl;

int get_data(int d) {
	int *data = new int;
	cout << "Address of data in get_data() is " << &data << endl;
	*data = d;
	cout << "Address of data in get_data() is " << &data << endl;
	return *data;
}

void get_data_2(int *d) {
	cout << "Address of data in get_data() is " << &d << endl;
	*d = 1000;
	cout << "Address of data in get_data() is " << &d << endl;
}

int main()
{
	int *data{ nullptr };
	int value{ 100 };
	cout << "Address of value is " << &value << endl;
//	cout << "data is " << *data << endl;
	data = &value;
	cout << "Address of data is " << &data << endl;
	cout << "data is " << *data << endl;

	get_data_2(&value);

	cout << "Address of data is " << &data << endl;
	cout << "data is " << *data << endl;

	

	return 0;
}