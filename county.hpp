#include <iostream>

#ifndef COUNTY_HPP
#define COUNTY_HPP

class County {
private:
  std::string name;
  float unemployed_2015;
  float unemployed_2007;
  int med_income;
public:
  County(std::string name, float unemployed_2007, float unemployed_2015,
    int med_income);
};

#endif
