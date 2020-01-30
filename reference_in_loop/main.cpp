#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *v) {
	for (auto s : *v)
		cout << s << " ";
	cout << endl;
}

int main()
{
	vector<string> stooges{ "Larry", "Harry", "Moe" };

	cout << "\nBefore change:" << endl;
	display(&stooges);

	for (auto &s : stooges)
		s = "funny";

	cout << "\nAfter change:" << endl;
	display(&stooges);

	cout << endl;

	return 0;
}