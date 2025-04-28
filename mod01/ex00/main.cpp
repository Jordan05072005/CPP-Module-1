#include "Zombie.hpp"

int main(){
	Zombie zombie = Zombie("Hector");
	zombie.announce();

	Zombie *zombie2 = newZombie("Fred");
	zombie2->announce();
	delete zombie2;

	randomChump("John");
}