#include <iostream>
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string.h>

int main(void)
{
	std::cout << "------------CONSTRUCTOR------------ " << std::endl;
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(NULL);
	std::cout << me->getName() << std::endl;

	std::cout << "-----------MATERIA INIT-------------- " << std::endl;

	AMateria *tmp, *tmp1;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	std::cout << std::endl;

	std::cout << "-----------NEW CHARACTER USE-------------- " << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << std::endl;
	me->use(10, *bob);
	me->use(-1, *bob);
	std::cout << std::endl;


	std::cout << "-----------DEEP COPPY TESTS-------------- " << std::endl;
	Character	*ahmet = new Character("ahmet");
	tmp = src->createMateria("ice");
	ahmet->equip(tmp);
	tmp = src->createMateria("cure");
	ahmet->equip(tmp);
	tmp = src->createMateria("cure");
	ahmet->equip(tmp);
	tmp = src->createMateria("fire");
	ahmet->equip(tmp);

	Character	*ahmetcpy = new Character("denemecar");
	*ahmetcpy = *ahmet;
	ahmetcpy->use(0, *ahmet);
	std::cout << std::endl;
	std::cout << "-----------MATERIA OVERFLOW AND LEAKS TEST-------------- " << std::endl;

	IMateriaSource *materia = new MateriaSource();
	materia->learnMateria(new Ice());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Ice());

	delete materia;

	std::cout << std::endl;

	std::cout << "-----------UNEQUIP TEST-------------- " << std::endl;
	me->unequip(0);
	me->unequip(0);
	me->use(0, *bob);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	me->unequip(4);
	std::cout << std::endl;

	std::cout << "-----------DELETE-------------- " << std::endl;
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	delete ahmet;
	delete ahmetcpy;
	return 0;
}
