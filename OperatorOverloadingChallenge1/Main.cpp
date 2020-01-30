#include <iostream>

#include <cstring>

using std::cout;
using std::endl;

class Mystring
{
	// overloaded insertion operator
	friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
	{
		os << rhs.str;
		return os;
	}

private:
	char* str;

public:
	// no-args constructor
	Mystring() : str{ nullptr }
	{
		str = new char[1];
		*str = '\0';
	}

	// overloaded constructor
	Mystring(const char* s) : str{ nullptr }
	{
		if (s == nullptr)
		{
			str = new char[1];
			str = '\0';
		}
		else
		{
			str = new char[std::strlen(s) + 1];
			std::strcpy(str, s);
		}
	}

	// copy constructor
	Mystring(const Mystring &source) : str{ nullptr }
	{
		str = new char[std::strlen(source.str) + 1];
		std::strcpy(str, source.str);
	}

	// copy assignment
	Mystring& operator=(const Mystring &rhs)
	{
		cout << "Copy assignment" << endl;
		if (this == &rhs)
			return *this;
		delete[] this->str;
		str = new char[std::strlen(rhs.str) + 1];
		std::strcpy(str, rhs.str);
		return *this;
	}

	// move constructor
	Mystring(Mystring &&source) : str(source.str)
	{
		source.str = nullptr;
		cout << "Move constructor used" << endl;
	}

	// move assignment
	Mystring& operator=(Mystring &&rhs)
	{
		cout << "Using move assignment" << endl;
		if (this == &rhs)
			return *this;
		delete[] str;
		str = rhs.str;
		rhs.str = nullptr;
		return *this;
	}

	// destructor
	~Mystring()
	{
		if (str == nullptr)
		{
			cout << "Calling destructor for MyString: nullptr" << endl;
		}
		else
		{
			cout << "Calling destructor for MyString: " << str << endl;
		}

		delete[] str;
	}

	// make lowercase
	Mystring operator-() const
	{
		char* buff = new char[std::strlen(this->str) + 1];
		std::strcpy(buff, this->str);
		for (size_t i = 0; i < std::strlen(buff); i++)
			buff[i] = tolower(buff[i]);
		Mystring temp{ buff };
		delete[] buff;
		return temp;
	}

	// concatenate two string objects
	Mystring operator+(const Mystring &rhs) const
	{
		char* buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
		std::strcpy(buff, this->str);
		std::strcat(buff, rhs.str);
		Mystring temp{ buff };
		delete[] buff;
		return temp;
	}

	// equals
	bool operator==(const Mystring &rhs) const
	{
		return (std::strcmp(this->str, rhs.str) == 0);
	}

	// not equals
	bool operator!=(const Mystring &rhs) const
	{
		return !(std::strcmp(this->str, rhs.str) == 0);
	}

	// less than
	bool operator<(const Mystring &rhs) const
	{
		return (std::strcmp(this->str, rhs.str) < 0);
	}

	// greater than
	bool operator>(const Mystring &rhs) const
	{
		return (std::strcmp(this->str, rhs.str) > 0);
	}

	// concat and assign
	Mystring& operator+=(const Mystring &rhs)
	{
		*this = *this + rhs;
		return *this;
	}

	// repeat
	Mystring operator*(int n) const
	{
		char* buff = new char[std::strlen(this->str) * n + 1];
		std::strcpy(buff, this->str);
		for (size_t i = 0; i < n - 1; i++)
			std::strcat(buff, this->str);
		Mystring temp{ buff };
		delete[] buff;
		return temp;
	}

	// repeat and assign
	Mystring& operator*=(int n)
	{
		*this = *this * n;
		return *this;
	}

	// pre-increment - make the string upper case
	Mystring& operator++()
	{
		for (size_t i = 0; i < std::strlen(this->str); i++)
			str[i] = toupper(str[i]);
		return *this;
	}

	// post-increment -  make the string upper case
	Mystring& operator++(int)
	{
		Mystring temp{ *this };
		operator++();
		return temp;
	}
};

int main()
{
	// lowercase
	Mystring larry{ "Larry" };
	larry = -larry;

	// concatenation
	Mystring jimmy{ "Jimmy" };
	jimmy = jimmy + larry;

	// equals / not equals
	Mystring martin{ "Martin" };
	Mystring elf{ "Elf" };
	bool result = martin != elf;

	// less / greater than
	result = martin > elf;

	// concat and assign
	Mystring empty;
	empty += larry;

	// repeat / repeat and assign
	Mystring marty{ "abc" };
	// marty = marty * 4;
	marty *= 4;

	// pre/post increment
	Mystring s{ "Frank" };
	Mystring res;
	++s;
	cout << s << endl;
	s++;
	cout << s << endl;
}
