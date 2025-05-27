#include "ClapTrap.hpp"

int main(){
	ClapTrap player = ClapTrap("John");
	for (int i = 0; i < 3; i++){
		player.takeDamage(5);
	}
	player= ClapTrap("John");
		for (int i = 0; i < 11; i++){
		player.attack("Fred");
	}
	player = ClapTrap("John");
		for (int i = 0; i < 5; i++){
		player.attack("Fred");
	}
	for (int i = 0; i < 9; i++){
		player.takeDamage(1);
	}
	for (int i = 0; i < 6; i++){
		player.beRepaired(1);
	}
}