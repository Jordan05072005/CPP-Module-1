#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook{
	private:
		int max_contact;
		int	n_contact;
		Contact contact[8];


	public:
		PhoneBook();
		void printContacts();
		void printContact (int index);
		void addContact();
		~PhoneBook();
};

#endif