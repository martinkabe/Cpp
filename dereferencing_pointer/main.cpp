#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	/*
	int score{ 100 };
	int *score_ptr{ &score };

	cout << *score_ptr << endl;
	cout << &score << endl;
	cout << score_ptr << endl;

	*score_ptr = 200;

	cout << "\nThe value of score is " << score << " now." << endl;
	cout << "The value of score_ptr is " << *score_ptr << " now." << endl;
	*/

	vector<string> stooges{ "Larry","Moe","Curly" };
	vector<string> *vector_ptr{ nullptr };

	vector_ptr = &stooges;

	cout << "\nFirst stooges " << (*vector_ptr).at(0) << endl;

	cout << "\nStooges: ";
	for (auto stooge : *vector_ptr)
		cout << stooge << " ";
	cout << endl;



	return 0;
}