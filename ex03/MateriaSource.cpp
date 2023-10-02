#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructore Has Been Worked\n";
	for (int i = 0; i < MATERIA_COUNT; i++) materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << "MateriaSource Arg Constructore Has Been Worked\n";
	for (int i = 0; i < MATERIA_COUNT; i++) materias[i] = NULL;
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource Copy Assignment Has Been Worked\n";
	for (int i = 0; i < MATERIA_COUNT; i++)
	{
		if (!other.materias[i]) {
			if (materias[i]) {
				delete materias[i];
				materias[i] = NULL;
			}
			continue;
		}
		if (materias[i]) delete materias[i];
		materias[i] = other.materias[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructore Has Been Worked\n";

	int	i = -1;
	while (++i < MATERIA_COUNT && this->materias[i])
		delete this->materias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i;

	if (!m)
	{
		std::cout << "Argument is Null :/\n";
		return ;
	}
	i = -1;
	while (++i < MATERIA_COUNT)
	{
		if (!materias[i]) break;
		else if (!materias[i]->getType().compare(m->getType()))
		{
			std::cout << "this type is already added\n";
			delete m;
			return ;
		}
	}
	if (i == MATERIA_COUNT) {
		std::cout << "List is full\n";
		return ;
	}
	materias[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MATERIA_COUNT; i++)
	{
		if (materias[i] && !materias[i]->getType().compare(type))
		{
			std::cout << materias[i]->getType() << " has been created\n";
			return (materias[i]->clone());
		}
	}
	std::cout << type << " has not been found\n";
	return (NULL);
}

