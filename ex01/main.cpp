#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	//Scav Trap no more HP test;
	ScavTrap user2("user2");
	user2.beRepaired(2);
	user2.takeDamage(102);
	user2.beRepaired(2);
	user2.guardGate();
}