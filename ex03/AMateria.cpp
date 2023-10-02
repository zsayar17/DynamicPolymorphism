#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMeteria Constructore Has Been Worked\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMeteria Arg Constructore Has Been Worked\n";
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMeteria Copy Constructore Has Been Worked\n";
	*this = other;
}

AMateria::~AMateria()
{
	std::cout << "AMeteria Destructore Has Been Worked\n";
}

AMateria& AMateria::operator=(const AMateria& other)
{
	(void)other;
	std::cout << "AMeteria Copy Assignment Has Been Worked\n";
	return (*this);
}


std::string const& AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "use of Amateria, name of target is: "
		+ target.getName() + " *" << std::endl;
}
