#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		const static int maxItems = 4;
		AMateria* items[maxItems];
		int currentItems;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		~MateriaSource();
		void learnMateria(AMateria*) override;
		AMateria* createMateria(const std::string& type) override;
};

#endif