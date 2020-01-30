#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
{
	
	mat A = randn<mat>(4, 5);
	mat B = randn<mat>(4, 5);

	cout << A.size() << endl;


	cout << A * trans(B) << endl;

	return 0;
}
