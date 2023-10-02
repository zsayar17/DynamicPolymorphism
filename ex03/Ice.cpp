#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Constructore Has Been Worked\n";
}

Ice::~Ice()
{
	std::cout << "Ice Destructore Has Been Worked\n";
}

Ice::Ice(const Ice& other) : AMateria(other.getType())
{
	std::cout << "Ice Copy Constructore Has Been Worked\n";
}

Ice& Ice::operator=(const Ice& other)
{
	(void)other;
	std::cout << "Ice Copy Assignment Has Been Worked\n";
	return *this;
}

Ice* Ice::clone() const
{
	std::cout << "A Ice cloned\n";
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
