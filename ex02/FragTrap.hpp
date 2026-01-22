#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string new_name);
  FragTrap(const FragTrap &other);
  ~FragTrap();

  FragTrap &operator=(const FragTrap &other);
  void highFivesGuys(void);
  void print_params(void) const;
};

#endif