#include <iostream>
#include "county.hpp"

#ifndef STATE_HPP
#define STATE_HPP

class State {
private:
  std::string name;
  float unemployed_2015;
  float unemployed_2007;
  int med_income;
  County** counties;
  int n_counties;
  int counties_allocated;
public:
  State(std::string name, float unemployed_2007, float unemployed_2015,
    int med_income, int n_counties);
};

#endif
