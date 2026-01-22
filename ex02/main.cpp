#include "FragTrap.hpp"
#include <iostream>

int main() {
    FragTrap frag("Julien");
    frag.print_params();
    std::cout << "special function test" << std::endl;
    frag.highFivesGuys();
    
    std::cout << std::endl << "testing attack" << std::endl;
    frag.attack("David");

    std::cout << std::endl << "testing copy constructor" << std::endl;
    FragTrap fragCopy(frag);
    frag.print_params();
    fragCopy.print_params();
    fragCopy.takeDamage(2);
    fragCopy.print_params();
    fragCopy.beRepaired(2);
    fragCopy.print_params();

    std::cout << std::endl << "copy assignment operator test" << std::endl;
    FragTrap frag_new("paul");
    frag_new.takeDamage(100);
    FragTrap frag_test("david");
    frag_new.print_params();
    frag_test.print_params();
    frag_new = frag_test;
    frag_new.print_params();
    frag_new.takeDamage(10);
    
    std::cout << std::endl << "testing dmg/death" << std::endl;
    frag.print_params();
    frag.takeDamage(99);
    frag.print_params();
    frag.takeDamage(50);
    frag.print_params();

    std::cout << std::endl << "default constructor test" << std::endl;
    FragTrap s;
    s.print_params();
    s.takeDamage(10);

    std::cout << std::endl << "default destructor test" << std::endl;
    return 0;
}
