#include "Harl.hpp"

Harl::Harl( void ){
	this->level[0].name = "DEBUG";
	this->level[0].harl = &Harl::debug;
	this->level[1].name = "INFO";
	this->level[1].harl = &Harl::info;
	this->level[2].name = "WARNING";
	this->level[2].harl = &Harl::warning;
	this->level[3].name = "ERROR";
	this->level[3].harl = &Harl::error;
}

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
	for (int i = 0; i < 4; i++){
		if (this->level[i].name == level)
		{
			(this->*(this->level[i].harl))();
			return ;
		}
	}
}