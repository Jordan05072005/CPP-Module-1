#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->name = name;
	this->attackDamage = FragTrap::attackDamage;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
		std::cout << "Constructor of DiamondTrap is call" << std::endl;

}

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(){
	std::cout << "Constructor of DiamondTrap is call" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor of DiamondTrap is call" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "name DiamondTrap is " << this->name << ", and ClapTrap name is " << ClapTrap::name << std::endl;
}