#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Constructore Has Been Worked\n";
}

Cure::~Cure()
{
	std::cout << "Cure Destructore Has Been Worked\n";
}

Cure::Cure(const Cure& other) : AMateria(other.getType())
{
	std::cout << "Cure Copy Constructore Has Been Worked\n";
}

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	std::cout << "Cure Copy Assignment Has Been Worked\n";
	return *this;
}

Cure* Cure::clone() const
{
	std::cout << "A Cure cloned\n";
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
