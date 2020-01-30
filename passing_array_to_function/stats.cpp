#include <iostream>
#include <vector>
#include "stats.h"

double mean(std::vector<double> vec) {
	double sum{};
	for (double num : vec)
		sum += num;
	return(sum / static_cast<double>(vec.size()));
}