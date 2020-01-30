#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Mystring
{
	// overloaded insertion operator
	friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs)
	{
		os << rhs.str;
		return os;
	}

	// overloaded extraction operator
	friend std::istream &operator>>(std::istream &in, Mystring &rhs)
	{
		char* buff = new char[1000];
		in >> buff;
		rhs = Mystring{ buff };
		delete[] buff;
		return in;
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
	Mystring moe{ "Moe" };
	Mystring curly;

	cout << "Enter the third stooge's first name: ";
	cin >> curly;

	cout << "The three stooges are " << larry << ", " << moe << " and " << curly << endl;

	cout << "\nEnter the three stooges names separated by a space: ";
	cin >> larry >> moe >> curly;

	cout << "The three stooges are " << larry << ", " << moe << " and " << curly << endl;
}