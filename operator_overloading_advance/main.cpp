#include <iostream>
#include "MyString.h"
#include <cstring>

// prototypes
void string_compare(Mystring s1, Mystring s2);

int main()
{
	/*
	Mystring str1{ "HELLO" };
	Mystring str2;

	str2 = -str1;
	
	str1.display();
	str2.display();

	char cChar;
	std::cin.get(cChar);
	*/

	Mystring str1{ "Hello1" };
	Mystring str2{ "Hello1" };
	Mystring result{str1};

	result = -(str1 + " Hello2");
	result.display();

	string_compare(str1, str2);
	// bool result2 = (str1 == str2);

	return 0;
}
