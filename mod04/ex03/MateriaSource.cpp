#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Constructor of MateriaSource is call" << std::endl;
		for (int i = 0; i < this->maxItems; i++){
		this->items[i] = nullptr;
	}
	this->currentItems = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other){
	std::cout << "Copy Constructor of MateriaSource is call" << std::endl;
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
	std::cout << "Constructor assignment operator of MateriaSource is call" << std::endl;
	if (this != &other){
		for (int i = 0; i < this->maxItems; i++){
			if (this->items[i])
				delete this->items[i];
			this->items[i] = other.items[i];
			this->currentItems = other.currentItems;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(){
	std::cout << "Destructor of MateriaSource is call" << std::endl;
	for (int i = 0; i  < this->currentItems; i++){
		if (this->items[i])
			delete this->items[i];
	}
}

void MateriaSource::learnMateria(AMateria* mat){
	if (this->currentItems == maxItems){
		delete this->items[0];
		for (int i = 0; i < this->maxItems - 1; i++){
			this->items[i] = this->items[i + 1];
		}
		this->items[this->maxItems - 1] = mat;
	}
	else{
		this->items[this->currentItems++] = mat;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type){
	for (int i = 0; i < this->currentItems; i++){
		if (this->items[i]->getType() == type){
			return (this->items[i]->clone());
		}
	}
	return (0);
}