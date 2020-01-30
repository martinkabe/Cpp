#include <iostream>
#include <vector>

using namespace std;

void pass_by_value(vector<int> x) {
	for (int i{ 0 }; i < 3; ++i)
		x[i] = 100;
	cout << endl;
}

void pass_by_reference(vector<int> &x) {
	for (size_t i{ 0 }; i < x.size(); ++i)
		x[i] = 100;
	cout << endl;
}

void print_vect(vector<int> x) {
	for (int i{ 0 }; i < 3; ++i)
		cout << x[i] << " ";
	cout << endl;
}

int main()
{
	vector<int> vect1 { 1,2,3 };
	vector<int> vect2 { 4,5,6 };

	cout << "---------------- Pass by value --------------------" << endl;
	pass_by_value(vect1);
	print_vect(vect1);
	cout << "---------------- Pass by reference --------------------" << endl;
	pass_by_reference(vect2);
	print_vect(vect2);

	return 0;
}