#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

class MyString
{
private:
	char* str; // C-style string
public:
	// no-args constructor
	MyString() : str{nullptr}
	{
		str = new char[1];
		*str = '\0';
	}
	
	// overloaded constructor
	MyString(const char* s) : str{nullptr}
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
	MyString(const MyString &source) : str{nullptr}
	{
		str = new char[std::strlen(source.str) + 1];
		std::strcpy(str, source.str);
	}
	
	// destructor
	~MyString()
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
	
	// copy assignment
	MyString& operator=(const MyString &rhs)
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
	MyString(MyString &&source) : str(source.str)
	{
		source.str = nullptr;
		cout << "Move constructor used" << endl;
	}

	// move assignment
	MyString& operator=(MyString &&rhs)
	{
		cout << "Using move assignment" << endl;
		if (this == &rhs)
			return *this;
		delete[] str;
		str = rhs.str;
		rhs.str = nullptr;
		return *this;
	}

	MyString operator-() const // make lower case
	{
		char* buff = new char[std::strlen(str) + 1];
		std::strcpy(buff, str);
		for (size_t i = 0; i < std::strlen(buff); i++)
			buff[i] = tolower(buff[i]);
		MyString temp{ buff };
		delete[] buff;
		return temp;
	}

	MyString operator+(const MyString &rhs) // concatenate
	{
		char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
		std::strcpy(buff, str);
		std::strcat(buff, rhs.str);
		MyString temp{ buff };
		delete[] buff;
		return temp;
	}

	bool operator ==(const MyString &rhs) const // equality
	{
		return (std::strcmp(str, rhs.str) == 0);
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


	/*
	MyString empty;
	MyString larry("Larry");
	MyString stooge{ larry };

	empty.display();
	larry.display();
	stooge.display();
	*/
}
