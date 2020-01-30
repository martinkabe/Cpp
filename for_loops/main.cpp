#include <iostream>
#include <vector>

using namespace std;

int _main()
{

	/*for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j) {
		cout << i << " * " << j << " * " << " = " << (i*j) << endl;
	}*/

	/*for (int i{ 10 }; i > 0; --i)
		cout << "i is " << i << endl;
	cout << "Blastoff!" << endl;*/

	/*for (int i{ 10 }; i <= 100; i += 10) {
		if (i % 15 == 0)
			cout << i << endl;
	}*/

	/*for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j)
		cout << i << " + " << j << " = " << (i + j) << endl;*/

	/*for (int i{ 1 }; i <= 100; ++i)
		cout << i << ((i % 10 == 0) ? "\n" : " ");*/

	/*vector<int> nums{ 10,20,30,40,50 };

	for (int i{ 0 }; i < nums.size(); ++i)
		cout << nums[i] << endl;*/
	/*int sum{};
	for (int i{ 1 }; i <= 15; ++i)
		sum += (i % 2 != 0) ? i : 0;
	cout << "The sum of odd integers from 1 to 15 is " << sum << endl;

	cout << endl;*/

	/*int scores[]{ 100,99,150 };

	for (int score : scores)
		cout << "Score is: " << score << endl;*/

	/*int vars[] { 100,150,200 };

	for (auto var : vars)
		cout << "var is " << var << endl;*/

	/*vector<double> temps{ 87.2,28.7,45.6,85.3 };
	double sum{};

	for (double temp : temps)
		sum += temp;

	cout << "Average temperature is " << sum / temps.size() << endl;*/

	/*for (char c : "Hello world!")
		if (c != ' ')
			cout << c;*/

	/*vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
	int sum{};
	for (int num : vec)
		if ((num % 3) == 0 || (num % 5) == 0)
			++sum;
	cout << "Number divisible by 3 or 5 are " << sum << endl;*/

	/*int i{ 1 };

	while (i <=5)
	{
		cout << i << endl;
		++i;
	}*/

	/*int number{};
	cout << "Enter int number between 1 and 5: ";
	cin >> number;

	while (number <= 1 || number >=5)
	{
		cout << "Enter int number between 1 and 5: ";
		cin >> number;
	}

	cout << "Thanks!" << endl;*/

	/*int number{};

	cout << "Enter a positive integer - start the countdown: ";
	cin >> number;

	while (number > 0)
	{
		cout << number << endl;
		--number;
	}
	cout << "Blastoff!" << endl;*/

	/*bool flag{ true };
	int number{};

	while (flag)
	{
		cout << "Enter an integer between 1 and 5: ";
		cin >> number;
		if (number <= 1 || number >= 5)
			cout << "Out of range, try it again!" << endl;
		else {
			cout << "Thanks!" << endl;
			flag = false;
		}
	}*/
	
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10,100 };

	int count{ 0 };
	size_t index{ 0 };

	while (index < vec.size() && vec.at(index) != -99) {
		++count;
		++index;
	}

	cout << "Count is " << count << endl;
	cout << "Index is " << index << endl;


	return 0;
}