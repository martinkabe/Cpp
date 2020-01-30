#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void display(const vector<std::string>* const v)
{
	// (*v).at(0) = "Funny";
	for (std::string str : *v)
		cout << str << " ";
	cout << endl;
	// v = nullptr;
}

void display(int* array, int sentinel)
{
	while (*array != sentinel)
		cout << *array++ << " ";
	cout << endl;
}

int main()
{
	cout << "----------------------------------------" << endl;

	/*
	vector<std::string> stooges{ "Larry", "Moe", "Curly" };
	display(&stooges);
	*/
	int scores[]{ 100,98,97,79,85,-1 };
	display(scores, -1);
}