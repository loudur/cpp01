#include "humanb.h"

HumanB::HumanB(const std::string &name) :
	_name(name),
	_weapon(nullptr)
{
	std::cout << _name << ": created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << ": destroyed" << std::endl;
}

void HumanB::attack() const
{
	if (!_weapon)
	{
		std::cout << _name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
