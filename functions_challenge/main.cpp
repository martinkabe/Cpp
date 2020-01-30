#include <iostream>
#include <vector>
#include "functions_prototypes.h"

using namespace std;

int main()
{
	char selection{};
	vector<double> numbers{};

	do
	{
		menu();
		selection = get_selection();

		switch (selection)
		{
		case 'P':
			display_numbers(numbers);
			break;
		case 'A' :
			add_number(numbers);
			break;
		case 'M':
			calculater_mean(numbers);
			break;
		case 'S':
			return_smallest_number(numbers);
			break;
		case 'L':
			return_largest_number(numbers);
			break;
		case 'F':
			find_number(numbers);
			break;
		case 'Q':
			quit();
			break;
		default:
			unknown();
		}
	} while (selection!='q' && selection!='Q');
	
	return 0;
}
