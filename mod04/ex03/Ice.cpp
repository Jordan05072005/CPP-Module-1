#include "includes/Ice.hpp"

Ice::Ice() : AMateria(){
	std::cout << "Constructor of Ice is call" << std::endl;
	this->type = "ice";
}

Ice::~Ice(){
	std::cout << "Destuctor of Ice is call" << std::endl;
}

AMateria* Ice::clone() const{
	AMateria *obj = new Ice(*this);
	return (obj);
}

void Ice::use(ICharacter& target){
	std::cout << "shoots an ice bolt at " << target.getName() << " *" << std::endl;
}