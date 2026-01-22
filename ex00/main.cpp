#include "ClapTrap.hpp"

int main() {
  ClapTrap mate("Sebastian");
  ClapTrap copy;
  ClapTrap copy_cons(mate);

  mate.attack("jerome");
  copy_cons.attack("jerome");
  mate.beRepaired(10);
  mate.takeDamage(10);
  copy.attack("jerome");
  copy = mate;
  copy.attack("jerome");
  // mate.takeDamage(90);
  // mate.attack("jerome");
  // mate.beRepaired(10);
  // mate.takeDamage(90);
}