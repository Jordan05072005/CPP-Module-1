#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = name;
	this->attackDamage = 0;
	this->hitPoint = 10;
	this->energyPoint = 10;
	std::cout << "Contructor is call" << std::endl;
}

ClapTrap::ClapTrap(const std::string name){
	this->name = name;
	this->attackDamage = 0;
	this->hitPoint = 10;
	this->energyPoint = 10;
	std::cout << "Contructor is call" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy){
	std::cout << "Copy Contructor is call" << std::endl;
	if (this != &cpy){
		*this = cpy;
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap &cpy){
	std::cout << "Contructor assignement operator is call" << std::endl;
	if (this != &cpy){
		this->name = cpy.name;
		this->energyPoint = cpy.energyPoint;
		this->hitPoint = cpy.hitPoint;
		this->attackDamage = cpy.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
		std::cout << "Destructor is call" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->hitPoint <= 0)
		std::cout << "ClapTrap "<< this->name << " is already dead" << std::endl;
	else if (this->energyPoint <= 0)
		std::cout << "ClapTrap "<< this->name << " has no more of Energy Point" << std::endl;
	else{
		this->energyPoint--;
		std::cout << "ClapTrap "<< this->name << " attacks "<< target << ", causing "<< this->attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoint <= 0)
		std::cout << "ClapTrap "<< this->name << " is already dead" << std::endl;
	else{
		this->hitPoint-= amount;
		std::cout << "ClapTrap "<< this->name << " is attacks, he took "<< amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoint <= 0)
		std::cout << "ClapTrap "<< this->name << " is already dead" << std::endl;
	else if (this->energyPoint <= 0)
		std::cout << "ClapTrap "<< this->name << " has no more of Energy Point" << std::endl;
	else{
		this->energyPoint--;
		this->hitPoint+= amount;
		std::cout << "ClapTrap "<< this->name << " repairs "<< amount << " hit point."<< std::endl;
	}
}
