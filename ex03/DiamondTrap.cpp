#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
  std::cout << "DiamondTrap: Default Constructor called!" << std::endl;
  name = using ClapTrap::name;
}

DiamondTrap::DiamondTrap(std::string new_name)
    : ClapTrap(new_name + "_clap_name"), FragTrap(new_name),
      ScavTrap(new_name) {
  std::cout << "DiamondTrap: Constructor called!" << std::endl;
  name = new_name;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap: Destructor called!" << std::endl;
}

void DiamondTrap::whoAmI() {
  std::cout << "DiamondTrap: " << name << std::endl;
  std::cout << "ClapTrap: " << ClapTrap::name << std::endl;
}

void DiamondTrap::print_params(void) const {
  std::cout << "DiamondTrap " << name << " has " << attack_dmg << "attack damage, "
            << hit_pts << " hit points and " << energy_pts << " energy points !"
            << std::endl;
}
