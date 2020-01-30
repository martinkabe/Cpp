#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Mystring
{
	// Equality
	friend bool operator==(const Mystring &lhs, const Mystring &rhs)
	{
		return std::strcmp(lhs.str, rhs.str) == 0;
	}

	// make lowercase
	friend Mystring operator-(const Mystring &obj)
	{
		char* buff = new char[std::strlen(obj.str) + 1];
		std::strcpy(buff, obj.str);
		for (size_t i = 0; i < std::strlen(buff); i++)
			buff[i] = tolower(buff[i]);
		Mystring temp{ buff };
		delete[] buff;
		return temp;
	}

	// concatenation
	friend Mystring operator+(const Mystring &lhs, const Mystring &rhs)
	{
		char* buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
		std::strcpy(buff, lhs.str);
		std::strcat(buff, rhs.str);
		Mystring temp{ buff };
		delete[] buff;
		return temp;
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

	// display method
	void display() const
	{
		cout << str << " : " << get_length() << endl;
	}

	int get_length() const { return std::strlen(str); }

	const char* get_str() const { return str; }

};

int main()
{
	Mystring larry{ "Larry" };
	larry.display();

	larry = -larry;
	larry.display();

	/*
	Mystring m1{ "Hello" };
	Mystring m2 = "Hi";
	m1 = m2;
	m1 = Mystring{ "hoak" };
	*/
}