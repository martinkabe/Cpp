#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num{ 10 };

/*
	cout << "Value of num is: " << num << endl;
	cout << "sizeof of num is: " << sizeof num << endl;
	cout << "Address of num is: " << &num << endl;
*/

	/*
	
	int *p{nullptr};

	cout << "Value of p is: " << p << endl;
	cout << "Address of p is: " << &p << endl;
	cout << "sizeof of p is: " << sizeof p << endl;
	
	// p = nullptr; // set p to point nowhere

	cout << "Value of p is: " << p << endl;
	*/

	/*
	int score{ 10 };
	double high_temp{ 100.7 };
	int *score_ptr{ nullptr };
	score_ptr = &score;

	cout << "Value of score_ptr is: " << score_ptr << endl;
	cout << "Value of score is: " << &score << endl;
	cout << "Value of pointer score_ptr is: " << *score_ptr << endl;
	cout << "sizeof of score_ptr is: " << sizeof score_ptr << endl;
	*/

	/*
	int *a{ nullptr };
	int *b{ nullptr };
	int x{10};
	int y{20};
	int temp{};

	a = &x;
	b = &y;

	temp = *a;
	*a = *b;
	*b = temp;

	cout << "After swapping: " << "x = " << x << ", y = " << y << endl;
	*/
	
	double high_temp{ 100.7 };
	double low_temp{ 37.2 };

	double *temp_ptr{ nullptr };

	cout << "\nhigh_temp is " << high_temp << " and low_temp is " << low_temp << endl;

	temp_ptr = &high_temp;
	*temp_ptr = 1;
	temp_ptr = &low_temp;
	*temp_ptr = 2;

	cout << "\nhigh_temp is " << high_temp << " and low_temp is " << low_temp << endl;


	return 0;
}