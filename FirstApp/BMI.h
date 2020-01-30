#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI
{
public:

	BMI();
	BMI(string, int, double);
	~BMI();

	string GetName();

private:
	string _name;
	int _height;
	double _weight;
};

#endif // !BMI_H


