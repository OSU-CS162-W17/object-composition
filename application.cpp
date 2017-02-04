#include <iostream>
#include <fstream>

#include "state.hpp"
#include "county.hpp"

int main(int argc, char** argv) {

  std::ifstream infile;
  infile.open(argv[1]);

  int n_states;
  infile >> n_states;
  State** states = new State*[n_states];
  // std::cout << n_states << std::endl;

  for (int i = 0; i < n_states; i++) {
    std::string name;
    float unemployed_2007, unemployed_2015;
    int med_income, n_counties;
    infile >> name >> unemployed_2007 >> unemployed_2015
      >> med_income >> n_counties;

    states[i] = new State(name, unemployed_2007, unemployed_2015,
      med_income, n_counties);

    break;
  }

  infile.close();

}
