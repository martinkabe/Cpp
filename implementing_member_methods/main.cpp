#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000.0);

	bool dep = frank_account.deposit(800.0);

	if (frank_account.withdraw(1200.0)) {
		cout << "You have " << frank_account.get_balance() << " on your account" << endl;
	}
	else
	{
		cout << "You cannot go below zero, your account is " << frank_account.get_balance() << endl;
	}


	return 0;
}
