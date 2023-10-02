#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);

		Ice* clone() const;
		void use(ICharacter &target);
};

#endif
