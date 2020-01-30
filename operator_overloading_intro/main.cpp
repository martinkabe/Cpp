#include <iostream>
#include "Mystring.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	Mystring a{ "Hello" };
	a = Mystring{ "Hola" };
	a = "Bonjour";


	/*
	Mystring empty;					// no-args constructor
	Mystring larry("Larry");		// overloaded constructor
	Mystring stooge{ larry };		// copy constructor

	empty.display();
	larry.display();
	stooge.display();
	*/
	

	return 0;
}
