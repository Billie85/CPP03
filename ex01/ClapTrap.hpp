#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class  ClapTrap
{
private:
	ClapTrap();
protected:
//継承した先でも使える。
	std::string 	_name;
	int 			_HP;
	int 			_Energy;
	int 			_Attack_damage;
public:
//virtualを使うと呼ばれる優先が低くなる。
	//-----function---------
	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	//------operator--------
	ClapTrap& operator=(const ClapTrap &other);

	//-------constructor----
	ClapTrap(const ClapTrap&);
	ClapTrap(std::string);
	~ ClapTrap();
};

#endif