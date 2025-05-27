#include "ScavTrap.hpp"

int main(){
	ScavTrap player = ScavTrap("John");
	for (int i = 0; i < 11; i++){
		player.takeDamage(10);
	}
	player =ScavTrap("John");
		for (int i = 0; i < 11; i++){
		player.attack("Fred");
	}
	player = ScavTrap("John");
		for (int i = 0; i < 5; i++){
		player.attack("Fred");
	}
	for (int i = 0; i < 9; i++){
		player.takeDamage(10);
	}
	for (int i = 0; i < 6; i++){
		player.beRepaired(1);
	}
	player.guardGate();
}