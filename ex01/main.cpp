#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ScavTrap scav("Julien");
    scav.print_params();
    std::cout << "special function test" << std::endl;
    scav.guardGate();
    
    std::cout << std::endl << "testing attack" << std::endl;
    scav.attack("David");

    std::cout << std::endl << "testing copy constructor" << std::endl;
    ScavTrap scavCopy(scav);
    scav.print_params();
    scavCopy.print_params();
    scavCopy.takeDamage(2);
    scavCopy.print_params();
    scavCopy.beRepaired(2);
    scavCopy.print_params();

    std::cout << std::endl << "copy assignment operator test" << std::endl;
    ScavTrap scav_new("paul");
    scav_new.takeDamage(100);
    ScavTrap scav_test("david");
    scav_new.print_params();
    scav_test.print_params();
    scav_new = scav_test;
    scav_new.print_params();
    scav_new.takeDamage(10);
    
    std::cout << std::endl << "testing dmg/death" << std::endl;
    scav.print_params();
    scav.takeDamage(99);
    scav.print_params();
    scav.takeDamage(50);
    scav.print_params();
    scav.guardGate();

    std::cout << std::endl << "default constructor test" << std::endl;
    ScavTrap s;
    s.print_params();
    s.takeDamage(10);

    std::cout << std::endl << "default destructor test" << std::endl;
    return 0;
}
