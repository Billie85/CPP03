#include "ScavTrap.hpp"

/* //------constructor----------
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor" << std::endl;
} */

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "copy constructor" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap " << Name << " created " << std::endl;
	this->_HP = 100;
	this->_Energy = 50;
	this->_Attack_damage = 20;
}

//--------operator--------
ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed " << std::endl;
}

//------function-----------

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _Attack_damage << " points of damage! " << std::endl;
		this->_Energy--;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " took " << amount << " damage " << std::endl;
		this->_HP = this->_HP - amount;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		this->_Energy--;
		this->_HP = this->_HP + amount;
		std::cout << "ScavTrap " << _name << " repaired " << amount << " points" << std::endl;
		std::cout << "_HP =>" << this->_HP << " _Energy => " << this->_Energy << std::endl;
	}
}
