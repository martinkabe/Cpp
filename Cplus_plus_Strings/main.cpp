#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
/*
	string s1{ "Hello, my name is " };
	string s2{ "Martin" };

	cout << s1 + s2 << endl;

	cout << "-------------------------------------------" << endl;

	string sentence{};
	sentence = static_cast<string>("Hello ") + static_cast<string>("how are you?");
	cout << "The sentence is: " << sentence << endl;

	cout << "-------------------------------------------" << endl;

	string name{ "Martin" };
	for (auto c : name)
		cout << c << " ";

	cout << "\n-------------------------------------------" << endl;

	for (int c : name)
		cout << c << endl;

	cout << "\n-------------------------------------------" << endl;
*/

/*
	string name{ "Evicka" };

	for (size_t i = 0; i < name.length(); ++i)
	{
		char prvek{name[i]};

		cout << name[i] << " ";
	}
*/

	string name{ "Martin" };
	cout << name.length() << endl;

	name += " James";
	cout << name << endl;

	return 0;
}
