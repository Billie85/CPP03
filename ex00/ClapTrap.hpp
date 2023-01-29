#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class  ClapTrap
{
private:
	std::string 	_name;
	int 			_Hit_point;
	int 			_Energy_point;
	int 			_Attack_damage;
public:
	 ClapTrap(std::string Name);
/* void attack(const std::string& target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount); */
	~ ClapTrap();
};

#endif