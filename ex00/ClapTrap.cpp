#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) :_name(Name)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
	this->_Hit_point = 10;
	this->_Energy_point = 10;
	this->_Attack_damage  = 10;
}
 ClapTrap::~ ClapTrap()
 {
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
 }
