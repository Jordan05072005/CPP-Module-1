#include "includes/Cure.hpp"

Cure::Cure() : AMateria(){
	std::cout << "Constructor of Cure is call" << std::endl;
	this->type = "cure";
}

Cure::~Cure(){
	std::cout << "Destuctor of Cure is call" << std::endl;
}

AMateria* Cure::clone() const{
	AMateria *obj = new Cure(*this);
	return (obj);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}