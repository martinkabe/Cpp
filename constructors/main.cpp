#include <iostream>
#include <string>
#include "Player.h"

using std::cout; using std::endl;

void display_player(Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "XP: " << p.get_xp() << endl;
}

int main()
{

	Player empty;
	display_player(empty);

	/*
	Player *p1 = new Player("Martin", 200, 150);

	p1->say_hello();

	cout << "\Before calling desctructor." << endl;
	delete p1;
	cout << "\After calling desctructor." << endl;
	*/


	return 0;
}