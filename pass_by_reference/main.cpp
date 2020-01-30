#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "passByRef.h"

using namespace std;

static int number{ 1000 };

int main()
{
	int num{ 10 };
	cout << "num is " << num << endl;

	pass_by_ref1(num);
	cout << "num is " << num << " now." << endl;

	cout << endl;

	string name{ "Frank" };
	cout << "name is " << name << endl;
	pass_by_ref2(name);
	cout << "name is " << name << " now" << endl;

	cout << endl;

	cout << "Example with vector of strings:" << endl;

	vector<string> vect{ "Johny","Martin","Michal" };
	cout << "Vector before change, length is " << vect.size() << endl;
	print_vector(vect);
	cout << endl;
	pass_by_ref3(vect);
	cout << "Vector after change: " << endl;
	print_vector(vect);
	cout << "Vector length is: " << vect.size() << endl;
	// cout << endl;
	 
	cout << "Global scope of variables:" << endl;

	global_example();
	cout << "number is " << number << endl;

	cout << "Local static variables:" << endl;

	static_local_example();
	num += 2000;
	static_local_example();

	return 0;
}


void pass_by_ref1(int num) {
	num = 100;
	cout << "num in pass_by_ref1 function is " << num << endl;
}

void pass_by_ref2(std::string &s) {
	s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
	v.clear();
}

void print_vector(const vector<string> vect) {
	for (string v : vect)
		cout << v << " ";
	cout << endl;
}

void global_example() {
	cout << "\nGlobal number is " << number << " in global_example - start" << endl;
	number *= 2;
	cout << "\nGlobal number is " << number << " in global_example - end" << endl;

}

void static_local_example() {
	static int num{ 5000 };
	cout << "\nLocal static num is " << num << " in static_local_example - start" << endl;
	num += 1000;
	cout << "\nLocal static num is " << num << " in static_local_example - end" << endl;
}
