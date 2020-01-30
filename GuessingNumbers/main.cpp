
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

	static int noTry = 0;
	cout << "Guess my favourite number" << endl;
	int number;
	int result = 5;

	while (true)
	{
		noTry++;
		cout << "Give me your number: ";
		cin >> number;

		if (number == (float)(int)number)
			cout << "Give me only integer!";
			return 0;

		if (number == result)
		{
			cout << "That's my number, cool!" << endl;
			cout << "You did that for " << noTry << " of try" << endl;
			break;
		}
		else
		{
			cout << "This is not my number! Try that again!" << endl;
			if (number < result) {
				cout << "My number is greater than " << number << endl;
			}
			else
			{
				cout << "My number is less than " << number << endl;
			}
		}
	}
}
