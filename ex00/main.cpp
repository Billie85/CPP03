#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap user1("user1");
	ClapTrap user2("user2");
	user1.takeDamage(5);
	user2.takeDamage(5);
	user2.attack("Piet");
	user2.beRepaired(3);
	user1 = user2;
	user1.beRepaired(1);
}