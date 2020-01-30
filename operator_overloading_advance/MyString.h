#ifndef _MyString_H_
#define _MyString_H_

class Mystring
{
private:
	char *str; // pointer to a char[] that holds a C-style string
public:
	Mystring();										// no-args constructor
	Mystring(const char *s);						// overloaded constructor
	Mystring(const Mystring &source);				// copy constructor
	Mystring(Mystring &&source);					// move constructor
	Mystring operator-() const;						// lowercase
	Mystring operator+(const Mystring &rhs) const;	// concatenating strings
	bool operator==(const Mystring &rhs) const;		// comparing string operator

	~Mystring();									// destructor

	Mystring &operator=(const Mystring &rhs);
	Mystring &operator=(Mystring &&rhs);

	void display() const;
	int get_length() const;							// getters
	const char *get_str() const;
};

#endif // !_MyString_H_

