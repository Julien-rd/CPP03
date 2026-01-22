#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "ScavTrap: Default Constructor called!" << std::endl;
  hit_pts = 100;
  energy_pts = 50;
  attack_dmg = 20;
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name) {

  std::cout << "ScavTrap: Constructor called!" << std::endl;
  hit_pts = 100;
  energy_pts = 50;
  attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
  std::cout << "ScavTrap: Copy Constructor has been called!" << std::endl;
  name = other.name;
  hit_pts = other.hit_pts;
  energy_pts = other.energy_pts;
  attack_dmg = other.attack_dmg;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
  if (this != &other) {
    name = other.name;
    hit_pts = other.hit_pts;
    energy_pts = other.energy_pts;
    attack_dmg = other.attack_dmg;
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap: Destructor called!" << std::endl;
}

void ScavTrap::guardGate() {
  if (hit_pts == 0)
    std::cout << "ScavTrap " << name << " is dead!" << std::endl;
  else
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!"
              << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (hit_pts == 0) {
    std::cout << "ScavTrap " << name << " is dead! Attacking is not possible!"
              << std::endl;
  } else if (energy_pts == 0)
    std::cout << "ScavTrap " << name << " has no energy points left to attack!"
              << std::endl;
  else {
    std::cout << "ScavTrap " << name << " attacks " << target << " causing "
              << attack_dmg << " points of damage!" << std::endl;
    energy_pts--;
  }
}
