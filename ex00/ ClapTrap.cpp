#include " ClapTrap.hpp"

void attack(const std::string& target)
{
	
}

 ClapTrap:: ClapTrap() :Name("name"), Hit_point(10) ,Energy_point(10), Attack_damage(10)
{
	std::cout << "ClapTrap was create" << std::endl;
	return ;
}

 ClapTrap::~ ClapTrap()
{
	std::cout << "ClapTrap was destroyed" << std::endl;
}

