#include <iostream>
#include "header_main.h"

using namespace std;

const double pi{ 3.14159 };

int main()
{
	area_circle();


	return 0;
}

double calc_area_circle(double radius) {
	return (pi*radius*radius);
}

void area_circle() {
	double radius{};
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;
	cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

