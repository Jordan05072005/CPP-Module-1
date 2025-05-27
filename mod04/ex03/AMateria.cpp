#include "includes/AMateria.hpp"

AMateria::AMateria(){
	std::cout << "Default Constructor of AMateria is call" << std::endl;
}

AMateria::AMateria(std::string const & type){
	std::cout << "Constructor of AMateria is call" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& other){
	std::cout << "Copy Constructor of AMateria is call" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other){
	std::cout << "Constructor assignement operator of AMateria is call" << std::endl;
	if (this != &other){
		this->type = other.getType();
	}
	return (*this);
}

AMateria::~AMateria(){
	std::cout << "Destructor of AMateria is call" << std::endl;
}

const std::string& AMateria::getType() const{
	return (this->type);
}
void AMateria::use(ICharacter& target){
	(void)target;
}