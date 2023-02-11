#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "======== Test (no more HP) ========" << std::endl;
	ScavTrap user2("user2");
	user2.beRepaired(2);
	user2.takeDamage(102);
	user2.beRepaired(2);
	user2.guardGate();
	std::cout << std::endl;

	std::cout << "======== Test (no more EN) ========" << std::endl;
	ScavTrap user1("user1");
	for (size_t i = 0; i < 50; i++)
	{
		user1.attack("monster");
	}
	user1.beRepaired(10);
	user1.beRepaired(10);
	std::cout << std::endl;

	std::cout << "========== test normal =========== "<< std::endl;
	ScavTrap user3("user3");
	ScavTrap user4("user4");
	user3.takeDamage(5);
	user4.takeDamage(5);
	user4.attack("monster");
	user4.beRepaired(3);
	user3 = user4;
	user3.beRepaired(1);
}