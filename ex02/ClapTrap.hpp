#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class  ClapTrap
{
public:
	ClapTrap();
protected:
//継承した先でも使える。
	std::string 	_name;
	int 			_HP;
	int 			_Energy;
	int 			_Attack_damage;
public:
//virtualを使うと呼ばれる優先が低くなる。
	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap &other);

	ClapTrap(const ClapTrap&);
	ClapTrap(std::string);
	virtual ~ClapTrap();
};

#endif