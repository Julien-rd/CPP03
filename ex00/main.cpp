#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap a("julien");
    ClapTrap b("david");
    a.print_params();
    std::cout << std::endl << "energy test" << std::endl;
    for (int i = 0; i < 11; i++) {
        a.attack("david");
    }
    std::cout << std::endl << "dmg/death test" << std::endl;
    b.print_params();
    b.takeDamage(5);
    b.print_params();
    b.beRepaired(3);
    b.print_params();
    b.takeDamage(10);
    b.attack("julien");
    b.beRepaired(10);
    std::cout << std::endl << "copy constructor test" << std::endl;
    ClapTrap c(a);
    c.print_params();
    a.print_params();
    c.takeDamage(10);
    std::cout << std::endl << "copy assignment operator test" << std::endl;
    ClapTrap d("paul");
    d.takeDamage(10);
    d.print_params();
    d = c;
    c.print_params();
    d.print_params();
    d.takeDamage(10);
    std::cout << std::endl << "default constructor test" << std::endl;
    ClapTrap s;
    s.takeDamage(10);
    s.print_params();
    std::cout << std::endl << "default destructor test" << std::endl;
    return 0;
}