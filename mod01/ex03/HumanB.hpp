#ifndef HUMAINB_H
# define HUMAINB_H

# include "Weapon.hpp"


class HumanB{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif