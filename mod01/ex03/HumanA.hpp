#ifndef HUMAINA_H
# define HUMAINA_H
# include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon& weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		void attack();
};

#endif