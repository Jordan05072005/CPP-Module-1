#ifndef CONTACT_HPP
#	define CONTACT_HPP

#include <string>

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(){};
		Contact(std::string firstname, std::string lastname, std::string nickname, std::string phone_number, std::string darkest_secret);

		std::string getFistname() const{
			return this->firstname;
		}
		std::string getLastname() const{
			return this->lastname;
		}
		std::string getNickname() const{
			return this->nickname;
		}
		std::string getPhoneNumber() const{
			return this->phone_number;
		}
		std::string getDarkestSecret() const{
			return this->darkest_secret;
		}
		~Contact(){};
};

#endif