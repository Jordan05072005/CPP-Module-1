#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string name;
	public:
		DiamondTrap(const std::string name);
		DiamondTrap();
		virtual ~DiamondTrap();
		void whoAmI();

		using ScavTrap::attack;
};

#endif