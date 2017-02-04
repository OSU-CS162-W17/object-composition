#include <iostream>
#include "state.hpp"

State::State(std::string name, float unemployed_2007, float unemployed_2015,
  int med_income, int n_counties) :
    name(name),
    unemployed_2007(unemployed_2007),
    unemployed_2015(unemployed_2015),
    med_income(med_income),
    counties_allocated(n_counties) {

  this->counties = new County*[n_counties];

}
