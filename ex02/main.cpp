#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "----user 1----" << std::endl;
	ClapTrap user1("user1");
	user1.attack("ayumi");
	user1.takeDamage(10);
	user1.beRepaired(3);

	std::cout << "----user 2----" << std::endl;
	FragTrap user2("user2");
	user2.attack("ayumi");
	user2.takeDamage(20);
	user2.beRepaired(10);
	user2.highFivesGuys();

	std::cout << "----user 3----" << std::endl;
	ScavTrap user3("user3");
	user3.attack("ayumi");
	user3.takeDamage(20);
	user3.beRepaired(10);
	user3.guardGate();
}