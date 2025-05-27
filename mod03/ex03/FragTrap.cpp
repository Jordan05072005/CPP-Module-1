#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
	this->attackDamage = 30;
	this->energyPoint = 100;
	this->hitPoint = 100;
	std::cout << "Constructor of FragTrap is call" << std::endl;
}

FragTrap::FragTrap() : ClapTrap(){
	this->attackDamage = 30;
	this->energyPoint = 100;
	this->hitPoint = 100;
	std::cout << "Constructor of FragTrap is call" << std::endl;
};

FragTrap::~FragTrap(){
	std::cout << "Destructor of FragTrap is call" << std::endl;
}

void FragTrap::highFivesGuys(void){
	if (this->hitPoint <= 0)
		std::cout << "ScavTrap "<< this->name << " is already dead" << std::endl;
	else if (this->energyPoint <= 0)
		std::cout << "ScavTrap "<< this->name << " has no more of Energy Point" << std::endl;
	else
		std::cout << "Give me a high five, man!" << std::endl;
}