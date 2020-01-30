#include <iostream> 
#include <vector>

using namespace std;

void pass_by_ref(vector<int> *v) {
	for (auto &n : *v)
		n = 100;
	cout << endl;
}

void print_vect(vector<int> &v) {
	for (auto n : v)
		cout << n << " ";
	cout << endl;
}

void print_array(const int *arr) {
	for (int i{ 0 }; i < 3; ++i)
		cout << arr+i << " ";
	cout << endl;
}

int main()
{
	int arr[]{ 100,200,300 };
	print_array(arr);

	/*
	vector<int> vect{ 1,2,3,4,5 };
	print_vect(vect);
	cout << endl;

	pass_by_ref(&vect);
	print_vect(vect);
	*/

	return 0;
}


