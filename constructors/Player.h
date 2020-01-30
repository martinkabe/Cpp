#ifndef __PLAYER_H__
#define __PLAYER_H__
#include <iostream>
#include <string>

class Player
{
public:

	Player();
	Player(std::string name);
	Player(std::string name, int health, int xp);
	Player(const Player &source);
	~Player();

	void say_hello();
	std::string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }

private:

	std::string name;
	int health;
	int xp;

};


#endif // !__PLAYER__H

