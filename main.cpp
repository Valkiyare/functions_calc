//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "funcs.h"

int main() {
  std::cout << "Enter an integer number: ";
  int a, b;
  std::cin >> a;
  std::cout << "Now enter another integer number: ";
  std::cin >> b;
  int my_sum = sum(a,b);
  std::cout << "The sum of the numbers is " << my_sum << std::endl << std::endl;

  std::cout << "Enter the radius: ";
  float radius;
  std::cin >> radius;
  float my_area = area(radius);
  std::cout << "The circle area is: " << my_area << std::endl << std::endl;
  
  std::cout << "Pray tell, what is your height?\n(in metres, my dear fellow): ";
  float height, mass;
  std::cin >> height;
  std::cout << "And your mass? (in kilograms, chap): ";
  std::cin >> mass;
  float your_BMI = BMI(height,mass);
  std::cout << "Your BMI is: " << your_BMI << " kg/m^2" << std::endl;
}