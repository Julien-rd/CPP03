#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string new_name)
    : name(new_name), hit_pts(10), energy_pts(10), attack_dmg(0) {
  std::cout << "ClapTrap: Constructor called!" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called!" << std::endl; }

ClapTrap::ClapTrap()
    : name("Herbert"), hit_pts(10), energy_pts(10), attack_dmg(0) {
  std::cout << "ClapTrap: Default Constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
  std::cout << "ClapTrap: Copy Constructor has been called!" << std::endl;
  name = other.name;
  hit_pts = other.hit_pts;
  energy_pts = other.energy_pts;
  attack_dmg = other.attack_dmg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
  if (this != &other) {
    name = other.name;
    hit_pts = other.hit_pts;
    energy_pts = other.energy_pts;
    attack_dmg = other.attack_dmg;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (hit_pts == 0) {
    std::cout << "ClapTrap " << name << " is dead! Attacking is not possible!"
              << std::endl;
  } else if (energy_pts == 0)
    std::cout << "ClapTrap " << name << " has no energy points left to attack!"
              << std::endl;
  else {
    std::cout << "ClapTrap " << name << " attacks " << target << " causing "
              << attack_dmg << " points of damage!" << std::endl;
    energy_pts--;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hit_pts == 0) {
    std::cout << name << " is already dead!" << std::endl;
    return;
  }
  std::cout << name << " takes " << amount << " amount of dmg!" << std::endl;
  if (amount >= hit_pts)
    hit_pts = 0;
  else
    hit_pts -= amount;
  if (hit_pts == 0) {
    std::cout << name << " died!" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hit_pts == 0) {
    std::cout << name << " is dead! Repairing is not possible!" << std::endl;
  } else if (energy_pts == 0)
    std::cout << name << " has no energy points left to be repaired!"
              << std::endl;
  else {
    std::cout << name << " regains " << amount << " amount of energy!"
              << std::endl;
    energy_pts--;
    hit_pts += amount;
  }
}

void ClapTrap::print_params(void) const {
  std::cout << "ClapTrap " << name << " has " << attack_dmg << " attack damage, "
            << hit_pts << " hit points and " << energy_pts << " energy points !"
            << std::endl;
}
