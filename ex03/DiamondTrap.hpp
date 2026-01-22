#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
public:
  DiamondTrap();
  DiamondTrap(std::string new_name);
  DiamondTrap(const DiamondTrap &other);

  ~DiamondTrap();

  DiamondTrap &operator=(const DiamondTrap &other);

  virtual void print_params(void) const;
  void whoAmI();

  using ScavTrap::attack;
  using FragTrap::hit_pts;
  using ScavTrap::energy_pts;
  using FragTrap::attack_dmg;

private:
  std::string name;
};

#endif