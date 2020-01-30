#include "Player.h"

using std::cout;
using std::endl;
using std::string;

Player::Player() : Player{"None", 0, 0} {}
Player::Player(string name) : Player{name, 0, 0} {
}

Player::Player(string name, int health, int xp) : name{ name }, health{ health }, xp{xp} {
}

Player::Player(const Player &p) : name(p.name), health(p.health), xp(p.xp) {
	cout << "Copy constructor - made copy of: " << p.name << endl;
}

Player::~Player() {
	cout << "\nDestructor is called." << endl;
}

void Player::say_hello() {
	cout << "\nHello, my name is " << name << " and my health coeff is " << health << " and xp is " << xp << endl;
}
