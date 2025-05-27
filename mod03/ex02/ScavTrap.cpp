#include "ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
	this->attackDamage = 20;
	this->energyPoint = 50;
	this->hitPoint = 100;
	std::cout << "Constructor of ScavTrap is call" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(){
	this->attackDamage = 20;
	this->energyPoint = 50;
	this->hitPoint = 100;
	std::cout << "Constructor of ScavTrap is call" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor of ScavTrap is call" << std::endl;
}


void ScavTrap::attack(const std::string& target){
	if (this->hitPoint <= 0)
		std::cout << "ScavTrap "<< this->name << " is already dead" << std::endl;
	else if (this->energyPoint <= 0)
		std::cout << "ScavTrap "<< this->name << " has no more of Energy Point" << std::endl;
	else{
		this->energyPoint--;
		std::cout << "ScavTrap "<< this->name << " attacks "<< target << ", causing "<< this->attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(){
		if (this->hitPoint <= 0)
		std::cout << "ScavTrap "<< this->name << " is already dead" << std::endl;
	else if (this->energyPoint <= 0)
		std::cout << "ScavTrap "<< this->name << " has no more of Energy Point" << std::endl;
	else
		std::cout << "ScavTrap is in mode Guard" << std::endl;
}