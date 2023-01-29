#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class  ClapTrap
{
private:
	std::string 	_name;
	int 			_HP;
	int 			_Energy;
	int 			_Attack_damage;
public:
	//-----function---------
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//------operator--------
	ClapTrap &operator=(const ClapTrap &other);

	//-------constructor----
	ClapTrap(const ClapTrap &c);
	ClapTrap(ClapTrap &c);
	ClapTrap(std::string);
	~ ClapTrap();
};

#endif