#include <iostream>
#include <string>
#include "Player.h"

using std::cout;
using std::endl;
using std::string;


void display_active_players() {
	cout << "Active players: " << Player::get_num_players() << endl;
}

int main()
{
	Player *p1 = new Player("Martin", 100, 100);
	display_active_players();
	delete p1;
	display_active_players();

	Player p2("Michal", 100, 50);
	display_active_players();


	return 0;
}