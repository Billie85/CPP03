#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class  ScavTrap : public ClapTrap
{
protected:
//継承した先でも使える。
	std::string 	_name;
	int 			_HP;
	int 			_Energy;
	int 			_Attack_damage;
public:
//virtualを使うと呼ばれる優先が低くなる。
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
	ScavTrap& operator=(const ScavTrap &other);

	ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap(std::string);
	~ ScavTrap();
};

#endif