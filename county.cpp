#include <iostream>
#include "county.hpp"

County::County(std::string name, float unemployed_2007, float unemployed_2015,
  int med_income) :
    name(name),
    unemployed_2007(unemployed_2007),
    unemployed_2015(unemployed_2015),
    med_income(med_income) {

  // Empty.
}
