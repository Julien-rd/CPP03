#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ScavTrap mate("Sebastian");

  mate.attack("heinz");
  mate.takeDamage(10);
  mate.guardGate();
  mate.takeDamage(90);
  mate.guardGate();
}