// #include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"

int main()
 {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::string str = "ice";
	tmp = src->createMateria(str);
	me->equip(tmp);
	std::string str2 = "cure";
	tmp = src->createMateria(str2);
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
 }