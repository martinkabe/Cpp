#include <iostream>
#include "MyString.h"
#include <cstring>

// no-args constructor
Mystring::Mystring()
	:str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
	std::cout << "Copy assignment" << std::endl;
	if (this == &rhs)
		return *this;
	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
	return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
	std::cout << "Using move assignment" << std::endl;
	if (this == &rhs)
		return *this;
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

Mystring::Mystring(const char *s)
	: str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
		//*str = *s;
	}
}

// copy constructor
Mystring::Mystring(const Mystring &source)
	: str{ nullptr } {
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

// move constructor
Mystring::Mystring(Mystring &&source)
	: str{ source.str }
{
	source.str = nullptr;
	std::cout << "Move constructor used!" << std::endl;
}

// Destructor
Mystring::~Mystring() {
	if (str == nullptr) {
		std::cout << "Calling destructor for Mystring: nullptr" << std::endl;
	}
	else {
		std::cout << "Calling destructor for Mystring" << std::endl;
	}
	delete[] str;
}

// display method
void Mystring::display() const {
	std::cout << str << ": " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const { return std::strlen(str); }

// string getter
const char *Mystring::get_str() const { return str; }


Mystring Mystring::operator-() const
{
	char* buff = new char[std::strlen(str)+1];
	std::strcpy(buff, str);
	for (size_t i{ 0 }; i < std::strlen(str); ++i)
		buff[i] = tolower(buff[i]);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const {
	size_t buff_size = std::strlen(this->str) + std::strlen(rhs.str) + 1;
	char* buff = new char[buff_size];
	std::strcpy(buff, this->str);
	std::strcat(buff, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

bool Mystring::operator==(const Mystring &rhs) const {
	if (std::strlen(this->str) == std::strlen(rhs.str)) {
		for (size_t i{ 0 }; i < std::strlen(this->str); ++i) {
			if (tolower(str[i]) != tolower(rhs.str[i]))
				return false;
		}
	}
	else
	{
		return false;
	}
	// return (std::strcmp(str, rhs.str) == 0);
}

void string_compare(Mystring s1, Mystring s2) {
	if (s1 == s2) {
		std::cout << "strings are equal" << std::endl;
	}
	else
	{
		std::cout << "strings are not equal" << std::endl;
	}
}
