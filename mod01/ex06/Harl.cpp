#include "Harl.hpp"

Harl::Harl( void ){
	this->level[0] = "DEBUG";
	this->level[1] = "INFO";
	this->level[2] = "WARNING";
	this->level[3] = "ERROR";
}

void Harl::debug( void ){
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void ){
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void ){
	std::cout << "[Warning]\n I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error( void ){
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

int Harl::getIndex( std::string level ){
	for (size_t i = 0; i < this->level->length(); i++){
		if (this->level[i] == level)
			return (i);
	}
	return (-1);
}

void	Harl::complain( std::string level ){
	int	index = this->getIndex(level);
	while (index < (int)this->level->length()){
		switch (index){
			case -1:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
			case 0:
				this->debug();
				break;
			case 1:
				this->info();
				break;
			case 2 :
				this->warning();
				break;
			case 3 :
				this->error();
				break;
			default:
				break;
		}
		index++;
	}

}