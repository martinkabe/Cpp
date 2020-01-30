
#include "BMI.h"

BMI::BMI() {
	_height = 0;
	_weight = 0.0;
}

BMI::BMI(string name, int height, double weight) {
	this->_name = name;
	this->_height = height;
	this->_weight = weight;
}

BMI::~BMI() {

}

string BMI::GetName() {
	return this->_name;
}
