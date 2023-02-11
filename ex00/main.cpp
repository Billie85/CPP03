#include "ClapTrap.hpp"

int	main(void)
{
std::cout << "======== test (no more energy test) ========= "<< std::endl;
	ClapTrap user1("user1");
	user1.takeDamage(5);
	user1.beRepaired(3);
	user1.attack("monster1");
	user1.takeDamage(5);
	user1.beRepaired(1);
	user1.beRepaired(1);
	user1.attack("monster1");
	user1.attack("monster1");
	user1.attack("monster1");
	user1.attack("monster1");
	user1.attack("monster1");
	user1.beRepaired(1);
	user1.attack("monster1");
	user1.beRepaired(1);
	user1.attack("monster1");
std::cout << std::endl;

std::cout << "======== test (no more HP test)========= "<< std::endl;
	ClapTrap user2("user2");
	user2.takeDamage(10);
	user2.beRepaired(3);
	user2.beRepaired(10);
	user2.attack("monster");
std::cout << std::endl;

std::cout << "======== test normal ========= "<< std::endl;
	ClapTrap user3("user3");
	ClapTrap user4("user4");
	user3.takeDamage(5);
	user4.takeDamage(5);
	user4.attack("monster");
	user4.beRepaired(3);
	user3 = user4;
	user3.beRepaired(1);
}