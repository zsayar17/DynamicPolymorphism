#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal Constructore Has Been Worked" << std::endl;
	type = "Animal";
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "Animal Copy Constructore Has Been Worked" << std::endl;
	type = other.type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "Animal Copy Assignment Has Been Worked" << std::endl;
	type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructore Has Been Worked" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
