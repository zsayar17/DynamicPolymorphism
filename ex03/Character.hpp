#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		static const int MAX_MATERIA_COUNT = 4;
		AMateria *materias[MAX_MATERIA_COUNT];
		AMateria **all_materias;
		std::string name;

		void addNewMateria(AMateria* m);
		int getMateriaCount(AMateria **m);
		void deleteMaterias();
	public:
		Character();
		Character(const std::string name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
