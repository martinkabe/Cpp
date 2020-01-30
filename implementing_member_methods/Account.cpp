#include "Account.h"
#include <iostream>

using namespace std;

void Account::set_name(string s) { this->name = s; }
string Account::get_name() { return name; }

bool Account::deposit(double amount) {
	if (amount > 1500.0) {
		cout << "You cannot store " << amount << " to your bank account!" << endl;
		return false;
	}
	else
	{
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (balance - amount >= 0.0) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}
