#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "======== Test (no more HP) ========" << std::endl;
	FragTrap user2("user2");
	user2.beRepaired(2);
	user2.takeDamage(102);
	user2.beRepaired(2);
	std::cout << std::endl;

	std::cout << "======== Test (no more EN) ========" << std::endl;
	FragTrap user1("user1");
	for (size_t i = 0; i < 100; i++)
	{
		user1.attack("monster");
	}
	user1.beRepaired(10);
	user1.beRepaired(10);
	std::cout << std::endl;

	std::cout << "========== test normal =========== "<< std::endl;
	FragTrap user3("user3");
	FragTrap user4("user4");
	user3.takeDamage(50);
	user4.beRepaired(30);
	user4.takeDamage(50);
	user4.attack("monster");
	user4.beRepaired(30);
	user3 = user4;
	user3.beRepaired(1);
	user2.highFivesGuys();
}