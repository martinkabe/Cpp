#include <iostream>
#include <vector>
#include <string>
#include "../passing_array_to_function/stats.h"

using namespace std;



int main()
{
	vector <double> nums{ 1.5,2.8 };
	double average{ mean(nums) };

	cout << "The average of given numbers is: " << average << endl;

	return 0;
}

