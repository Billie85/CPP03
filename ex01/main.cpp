#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap user1("user1");
	ClapTrap user2("user2");
	user1.attack("ayumi");
	user1.takeDamage(5);
	user2.takeDamage(5);
	user2.attack("Piet");
	user2.beRepaired(3);
	user1.beRepaired(1);
}