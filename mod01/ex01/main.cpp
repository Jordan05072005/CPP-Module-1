#include "Zombie.hpp"

int main(){
	int	i = -1;
	int	n = 10;
	Zombie *zombies = zombieHorde(n, "BOB");

	while (++i < n)
		zombies[i].announce();
	delete [] zombies;
}