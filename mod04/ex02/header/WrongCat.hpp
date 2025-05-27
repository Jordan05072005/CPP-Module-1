#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		virtual ~WrongCat();
		std::string getType()const;
		using WrongAnimal::makeSound;
};

#endif 