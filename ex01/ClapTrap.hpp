#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
public:
  ClapTrap(std::string new_name);
  ClapTrap(void);
  virtual ~ClapTrap(void);
  virtual ClapTrap &operator=(const ClapTrap &other);
  ClapTrap(const ClapTrap &other);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  virtual void print_params(void) const;

protected:
  std::string name;
  unsigned int hit_pts;
  unsigned int energy_pts;
  unsigned int attack_dmg;
};

#endif