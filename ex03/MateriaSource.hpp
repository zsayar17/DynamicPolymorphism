#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class Ametria;

class MateriaSource : public IMateriaSource
{
	private:
		static const int MATERIA_COUNT = 4;
		AMateria *materias[MATERIA_COUNT];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};


#endif
