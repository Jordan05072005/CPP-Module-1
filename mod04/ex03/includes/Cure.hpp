#ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		~Cure();
		AMateria* clone() const override;
		void use(ICharacter& target) override;
};

#endif