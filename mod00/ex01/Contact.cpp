#include "Contact.hpp"

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}