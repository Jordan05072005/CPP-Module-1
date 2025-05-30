#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	void announce( void );
	void set_name(std::string name);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif