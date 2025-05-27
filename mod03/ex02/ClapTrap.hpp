#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class ClapTrap{
	protected:
		std::string name;
		int hitPoint;
		int energyPoint;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& cpy);
		ClapTrap& operator=(const ClapTrap& cpy);
		virtual ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif