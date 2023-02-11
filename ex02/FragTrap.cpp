#include "FragTrap.hpp"

//------constructor----------
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "copy constructor" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap " << Name << " created " << std::endl;
	this->_HP = 100;
	this->_Energy = 100;
	this->_Attack_damage = 30;
}

//--------operator--------
FragTrap& FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destroyed " << std::endl;
}

//------function-----------

void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _Attack_damage << " points of damage! " << std::endl;
		this->_Energy--;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_HP <= 0)
	{
		std::cout << "No more HP" << std::endl;
	}
	else if (this->_Energy <= 0)
		std::cout << "No more Energy" << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " took " << amount << " damage " << std::endl;
		this->_HP = this->_HP - amount;
	}
}

void FragTrap::beRepaired(unsigned int amount)
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
		std::cout << "FragTrap " << _name << " repaired " << amount << " points" << std::endl;
		std::cout << "_HP =>" << this->_HP << " _Energy => " << this->_Energy << std::endl;
	}
}
