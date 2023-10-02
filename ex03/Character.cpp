#include "Character.hpp"

Character::Character() : name("Default")
{
	std::cout << "Character Constructore Has Been Worked\n";
	for (int i = 0; i < MAX_MATERIA_COUNT; i++) materias[i] = NULL;
	all_materias = NULL;
}

Character::Character(const std::string name) : name(name)
{
	std::cout << "Character Parameter Constructore Has Been Worked\n";
	for (int i = 0; i < MAX_MATERIA_COUNT; i++) materias[i] = NULL;
	all_materias = NULL;
}

Character::Character(const Character& other) : name(other.getName())
{
	std::cout << "Character Copy Constructore Has Been Worked\n";
	for (int i = 0; i < MAX_MATERIA_COUNT; i++) materias[i] = NULL;
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	name = other.name;
	std::cout << "Character Copy Assignment Has Been Worked\n";
	for (int i = 0; i < MAX_MATERIA_COUNT; i++) {
		if (!other.materias[i]) continue;
		materias[i] = other.materias[i]->clone();
		addNewMateria(materias[i]);
	}
	return *this;
}

Character::~Character()
{
	std::cout << this->name << " Character: Destructore Has Been Worked\n";
	deleteMaterias();
}

std::string const& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Sent argument is NULL\n";
		return ;
	}

	for (int i = 0; i < MAX_MATERIA_COUNT; i++)
	{
		if (materias[i]) continue ;
		materias[i] = m;
		addNewMateria(m);
		std::cout << m->getType() << " added to " << i << ". index\n";
		return ;
	}
	std::cout << "There is no empty slot for equip new materia :(\n";
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > MAX_MATERIA_COUNT - 1) {
		std::cout << "Invalid index number\n";
		return ;
	}
	if (materias[idx]) std::cout << idx << ". equip named " << materias[idx]->getType() <<" has been dropped.\n";
	else std::cout << idx << ". has not equiped\n";
	materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > MAX_MATERIA_COUNT - 1) std::cout << "Invalid index number\n";
	else if (materias[idx]) std::cout << materias[idx]->getType() << " used against to " << target.getName() << std::endl;
	else std::cout << idx << ". index has no member against to " << target.getName() << std::endl;
}

int Character::getMateriaCount(AMateria **m)
{
	int	count = 0;

	while (m && *(m++))
		count++;
	return (count);
}

void Character::addNewMateria(AMateria* m)
{
	int count;
	AMateria **new_all_materias;

	count = getMateriaCount(all_materias);
	for (int i = 0; i < count; i++)
	{
		if (all_materias[i] == m)
			return ;
	}
	new_all_materias = new AMateria*[count + 2];
	new_all_materias[count] = m;
	new_all_materias[count + 1] = NULL;
	for (int i = 0; i < count; i++)
		new_all_materias[i] = all_materias[i];
	delete[] all_materias;
	all_materias = new_all_materias;
}

void Character::deleteMaterias()
{
	AMateria **tmp_materias;

	if (!all_materias) return ;
	tmp_materias = all_materias;
	while (*(tmp_materias++)) delete *(tmp_materias - 1);
	delete[] all_materias;
}
