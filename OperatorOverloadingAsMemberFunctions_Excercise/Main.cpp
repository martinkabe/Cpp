#include <iostream>

class Money {
	int dollars;
	int cents;
public:
	Money(int dollars, int cents) : dollars{ dollars }, cents{ cents } {}

	Money(int total) : dollars{ total/100 }, cents{ total%100 }	{}

	//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
	//----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----
	bool operator==(const Money &rhs) const
	{
		return (this->dollars == rhs.dollars && this->cents == rhs.cents);
	}

	bool operator!=(const Money &rhs) const
	{
		return !(*this == rhs);
	}

	//----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
	//----DO NOT MODIFY THE CODE BELOW THIS LINE----
};


int main()
{
	Money m1(515);
	Money m2(500);

	bool res = m1 != m2;
}