#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
//--------function--------
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
	ScavTrap(const ScavTrap&);
	ScavTrap(std::string);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
};

#endif