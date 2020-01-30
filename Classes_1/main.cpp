#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
	// attributes
	string name;
	int health;
	int xp;

public:
	// methods
	void talk(string str);
	bool isDead(string str);
};

int main()
{
	Player frank;
	Player hero;

	Player players[]{ frank, hero };
	vector<Player> player_vec{ frank};
	player_vec.push_back(hero);
	
	/*
	frank.talk("hello");
	cout << boolalpha << frank.isDead("no") << noboolalpha << endl;
	*/
	
	return 0;
}

void Player::talk(string str)
{
	cout << str << endl;
}

bool Player::isDead(string str)
{
	return (str!="") ? (false) : (true);
}
