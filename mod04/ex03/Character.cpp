#include "includes/Character.hpp"

Character::Character(){
	std::cout << "Default Constructor of Character is call" << std::endl;
	this->currentItems = 0;
	for (int i = 0; i < this->maxItems; i++){
		this->items[i] = nullptr;
	}
}

Character::Character(const std::string name){
	std::cout << "Constructor of Character is call" << std::endl;
	this->name = name;
	this->currentItems = 0;
	for (int i = 0; i < this->maxItems; i++){
		this->items[i] = nullptr;
	}
}

Character::Character(const Character& other){
	std::cout << "Copy Constructor of Character is call" << std::endl;
	*this = other;
}

Character& Character::operator=(const Character& other){
	std::cout << "Constructor assignement operator of Character is call" << std::endl;
	if (this != &other){
		this->name = other.getName();
		for (int i = 0; i < this->maxItems; i++){
			if (this->items[i])
				delete this->items[i];
			this->items[i] = other.items[i];
		}
		this->currentItems = other.currentItems;
	}
	return (*this);
}

Character::~Character(){
	std::cout << "Destructor of Character is call" << std::endl;
	for (int i = 0; i < this->maxItems; i++){
		if (this->items[i])
			delete this->items[i];
	}
}

const std::string& Character::getName() const{
	return (this->name);
}

void Character::equip(AMateria *m){
	if (this->currentItems >= this->maxItems){
		std::cout << "Le nombre d'item max est déja atteint" << std::endl;
	}
	else{
		for (int i = 0; i < this->maxItems; i++){
			if (this->items[i] == nullptr){
				this->items[i] = m;
				(this->currentItems)++;
				break;
			}
		}
	}
}

void Character::unequip(int idx){
	if (idx >= this->currentItems || idx >= this->maxItems){
		std::cout << "Il n'y a pas d'items a cette emplacement" << std::endl;
	}
	else{
		this->items[idx] = nullptr;
		(this->currentItems)--;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx + 1 > this->currentItems || idx >= this->maxItems){
		std::cout << "Il n'y a pas d'items a cette emplacement" << std::endl;
	}
	else{
		this->items[idx]->use(target);
	}
}