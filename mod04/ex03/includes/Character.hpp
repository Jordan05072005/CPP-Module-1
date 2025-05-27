#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter{
	private:
		const static int maxItems = 4;
		int currentItems;
		AMateria* items[maxItems];
		std::string name;
	public:
		Character();
		Character(const std::string name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();
		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;


};

#endif