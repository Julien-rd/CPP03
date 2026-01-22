#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {

  std::cout << "FragTrap: Default Constructor called!" << std::endl;
  hit_pts = 100;
  energy_pts = 100;
  attack_dmg = 30;
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name) {

  std::cout << "FragTrap: Constructor called!" << std::endl;
  hit_pts = 100;
  energy_pts = 100;
  attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap: Copy Constructor has been called!" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap: Destructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << "FragTrap: Copy assignment operator called" << std::endl;
  if (this != &other) {
    name = other.name;
    hit_pts = other.hit_pts;
    energy_pts = other.energy_pts;
    attack_dmg = other.attack_dmg;
  }
  return *this;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "positive high-fives request!" << std::endl;
}

void FragTrap::print_params(void) const {
  std::cout << "FragTrap " << name << " has " << attack_dmg << " attack damage, "
            << hit_pts << " hit points and " << energy_pts << " energy points !"
            << std::endl;
}