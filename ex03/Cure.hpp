#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);

		Cure* clone() const;
		void use(ICharacter &target);
};

#endif
