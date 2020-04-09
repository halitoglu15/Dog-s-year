#include <iostream>

int main() {
  //your dog's age
  int dog_age=4;
  //The first two year counts as 21 human years
  int early_years=21;
  //Each following year counts as 4 human years
  int later_years=(dog_age-2)*4;
  int human_years=early_years+later_years;
  
  std::cout<<"My name is Honey! Ruff ruff, I am\n"<< human_years <<" years old in human years\n";  
  
  
}