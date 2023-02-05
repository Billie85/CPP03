#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"


#include <iostream>
#include <string>

class  FragTrap :public ClapTrap
{
private:
	FragTrap();
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	FragTrap& operator=(const FragTrap &other);
	FragTrap(const FragTrap&);
	FragTrap(std::string);
	~ FragTrap();
	
	void highFivesGuys(void);
};

#endif