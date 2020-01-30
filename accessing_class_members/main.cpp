#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public:
	string name;
	int health;
	int xp;

public:
	void talk(string text_to_say);
	bool is_dead();

};

class Account {
public:
	string name;
	double balance;

public:
	
	void Account::setname(string name)
	{
	}

	void deposit(double bal) { balance += bal; cout << bal << " in deposit" << endl; };
	void withdraw(double bal) { balance -= bal; cout << bal << " in withdraw" << endl; };
};

int main()
{
	Account frank_account;
	frank_account.name = "Frank's account";
	frank_account.balance = 5000.0;
	frank_account.deposit(1000.0);
	frank_account.withdraw(400.0);
	cout << "Balance is: " << frank_account.balance << endl;

	cout << endl;

	Player frank;
	frank.talk("Hello. my name is Frank!");
	
	cout << endl;

	Player *enemy = new Player();
	(*enemy).name = "Enemy";
	(*enemy).health = 100;
	enemy->xp = 15;
	enemy->talk("I will destroy you!");


	return 0;
}

void Player::talk(string talk) {
	cout << talk << endl;
}
