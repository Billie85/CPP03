#include "ClapTrap.hpp"
#include <cstdio>

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_Attack_damage = other._Attack_damage;
	this->_Energy = other._Energy;
	this->_HP = other._HP;
	return (*this);
}

//Default constructor
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

//Copy constructor
ClapTrap::ClapTrap(const ClapTrap &c)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

ClapTrap::ClapTrap(std::string Name) :_name(Name)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
	this->_HP = 10;
	this->_Energy = 10;
	this->_Attack_damage = 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _Attack_damage << " points of damage! " << std::endl;
		this->_Energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " damage " << std::endl;
		this->_HP = this->_HP - amount;

	}
}

void ClapTrap::beRepaired(unsigned int amount)
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
		std::cout << "ClapTrap " << _name << " repaired " << amount << " points" << std::endl;
		std::cout << "_HP =>" << this->_HP << " _Energy => " << this->_Energy << std::endl;
	}
}

ClapTrap::~ ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed " << std::endl;
}
