#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*int number{};

	do
	{
		cout << "Enter an integer between 1 and 5: ";
		cin >> number;

	} while (number <= 1 || number >= 5);

	cout << "Thanks!" << endl;*/

	/*char selection{};
	static int counter{};

	do
	{
		++counter;
		double width{}, height{};
		cout << "Enter width and height separated by space: ";
		cin >> width >> height;

		double area{ width*height };
		cout << "The area is " << area << endl;

		cout << "Do you want to continue and calculate another area? ";
		cin >> selection;

	} while (selection == 'Y' || selection == 'y');

	cout << "Thanks, you used loop " << counter << " times." << endl;*/


	/*char selection{};

	do
	{
		cout << "1. Do this" << endl;
		cout << "2. Do that" << endl;
		cout << "3. Do something else" << endl;
		cout << "Q: Quit" << endl;

		cout << endl;
		cout << "Enter your selection: ";
		cin >> selection;

		if (selection == '1')
			cout << "You chose 1 - doing this" << endl;
		else if (selection == '2')
			cout << "You chose 2 - doing that" << endl;
		else if (selection == '3')
			cout << "You chose 3 - doing something else" << endl;
		else
			cout << "Invalid choice, try it again!" << endl;

	} while (selection != 'Q' && selection != 'q');

	cout << "I'm quiting" << endl;*/

	vector<int> values{ 1,2,3,-1,4,-1,-99,100,200,300 };

	for (auto val : values) {
		if (val == -99)
			break;
		else if (val == -1)
			continue;
		else
			cout << val << endl;
	}

	return 0;
}
