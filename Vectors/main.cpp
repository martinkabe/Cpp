#include <stdio.h>
#include <iostream>
#include <vector>


using namespace std;

int main()
{
	// https://www.youtube.com/watch?v=Da_PPyjOUrE
	vector<vector<int>> stuff;

	for (int i = 0; i < 5; i++)
	{
		vector<int> temp;
		for (int j = 0; j < 5; j++)
		{
			temp.push_back(i);
		}
		stuff.push_back(temp);
		cout << "Vector [" << i << "] contains " << temp.size() << " elements" << endl;
	}

	cout << endl;
	cout << "Printing the results" << endl;

	for (int i = 0; i < stuff.size(); i++)
	{
		for (int j = 0; j < stuff[i].size(); j++)
		{
			cout << stuff[i][j] << " ";
		}
		cout << endl;
	}

	/*
	
	vector<vector<int>> stuff
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < stuff.size(); i++)
	{
		for (int j = 0; j < stuff[i].size(); j++)
		{
			cout << stuff[i][j] << " ";
		}
		cout << endl;
	}
	*/
	/*
		vector <int> numbers{ 1,2,3,4,5,6 };

		numbers.push_back(30);

		int vect_size = numbers.size();

		cout << numbers.at(15);
	*/
	

	/*
	
	for (int i = 0; i < vect_size; i++)
	{
		cout << numbers[i] << " ";
	}

	cout << numbers.at(0);
	*/

	return 0;
}
