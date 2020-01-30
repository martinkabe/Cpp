#include <iostream>
#include <vector>
#include <stdio.h> 
#include <stdlib.h>
#include <cctype>

using namespace std;

int main()
{
	/*vector<vector<int>> vector_2d
	{
		{1,2,3},
		{5,6,7,8},
		{9,10,11,12,13}
	};

	for (auto vect : vector_2d) {
		for (auto val : vect) {
			cout << val << " ";
		}
		cout << endl;
	}*/

	//int rows{};
	//int cols{};

	//cout << "# rows: ";
	//cin >> rows;
	//// cout << endl;
	//cout << "# cols: ";
	//cin >> cols;
	//int counter{};

	//for (int i{ 1 }; i <= rows; ++i) {
	//	for (int j{ 1 }; j <= cols; ++j) {
	//		cout << ++counter << " ";
	//	}
	//	cout << endl;
	//}

	/*vector<int> data{};
	int num_size{};

	cout << "How many data do you want? ";
	cin >> num_size;
	cout << endl;

	for (int i{ 1 }; i <= num_size; ++i) {
		int num{};
		cout << "Enter a number " << i << ": ";
		cin >> num;
		data.push_back(num);
	}

	for (int var : data) {
		for (int i{ 1 }; i <= var; ++i) {
			if (i % 5 == 0)
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;
	}*/

/*
	vector<int> vect{ 1,2,3 };
	int result{};

	for (int i{ 0 }; i < vect.size()-1; ++i) {
		for (int j{ (i+1) }; j < vect.size(); ++j) {
			result += (vect[i] * vect[j]);
		}
	}
	cout << "The result is " << result << endl;
*/
	
	char selection{};
	vector<double> vect{};

	while (selection != 'q' && selection != 'Q')
	{
		cout << endl;
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display smallest number" << endl;
		cout << "L - Display largest number" << endl;
		cout << "Q - Quit" << endl;

		cout << "\nEnter your choice: ";
		cin >> selection;
		cout << endl;

		// code logic here:
		if (selection == 'p' || selection == 'P') {
			if (vect.size() == 0)
				cout << "[] - the list is empty." << endl;
			else
			{
				cout << "[ ";
				for (double num : vect)
					cout << num << " ";
				cout << " ]";
			}
		}
		else if (selection == 'a' || selection == 'A') {
			double number{};
			cout << "Enter a number you need to add: ";
			cin >> number;
			vect.push_back(number);
			cout << number << " added" << endl;
		}
		else if (selection == 'm' || selection == 'M') {
			if (vect.size() == 0)
				cout << "[] - the list is empty, cannot compute mean.";
			else
			{
				int sum{};
				for (double num : vect)
					sum += num;
				cout << "Mean is " << sum / static_cast<double>(vect.size()) << endl;
			}
		}
		else if (selection == 's' || selection == 'S') {
			double min{ vect[0] };
			for (double num : vect)
				if (num < min)
					min = num;
			cout << "Min is " << min << endl;
		}
		else if (selection == 'l' || selection == 'L') {
			double max{ vect[0] };
			for (double num : vect)
				if (num > max)
					max = num;
			cout << "Max is " << max << endl;
		}
		else
		{
			cout << "Invalid choice, try it again!" << endl;
		}
	}

	cout << "I'm leaving, thanks!" << endl;
	
	

	//int num = 10;
	//while (num >= 1) {
	//	cout << num << " ";
	//	num--;
	//}
	//	

	return 0;
}
	


