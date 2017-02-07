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

std::string State::get_name() {
  return this->name;
}

float State::get_unemployed_2015() {
  return this->unemployed_2015;
}

float State::get_unemployed_2007() {
  return this->unemployed_2007;
}

int State::get_med_income() {
  return this->med_income;
}

County** State::get_counties() {
  return this->counties;
}

int State::get_n_counties() {
  return this->n_counties;
}

int State::get_counties_allocated() {
  return this->counties_allocated;
}

void State::add_county(County* county) {
  this->counties[this->n_counties++] = county;
}
