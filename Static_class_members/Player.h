#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

using std::string;

class Player
{
private:
	static int num_players;
	string name;
	int health;
	int xp;

public:
	string get_name() { return this->name; }
	int get_health() { return this->health; }
	int get_xp() { return this->xp; }
	
	static int get_num_players();

	Player(string name_val = "None", int health_val = 0, int xp_val = 0);
	// Copy constructor
	Player(const Player &source);
	// Destructor
	~Player();

};


#endif // !_PLAYER_H_

