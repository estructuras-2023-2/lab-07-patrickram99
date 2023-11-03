#include "student_file.h"
#include <iostream>


std::vector<int> i1 = {1, 2, 3};
std::vector<int> i2 = {49, 24, 26, 12, 5,  33, 25, 30, 35, 41, 46, 23, 21,
                       3,  38, 43, 11, 19, 34, 29, 20, 32, 39, 7,  50};
std::vector<int> i3 = {1, 2, 3};
std::vector<int> i4 = {30, 12};

std::vector<int> o1 = {2, 3};
std::vector<int> o2 = {12, 50};
std::vector<int> o3 = {1, 2};
std::vector<int> o4 = {12, 30};

int main() {

  std::cout << "Resultados de los test\n";

  if (Torneo(i1, 2, 2) == o1) {
    std::cout << "Test 1 exitoso" << endl;
  } else {
    std::cout << "Test 1 fallido" << endl;
  }

  if (Torneo(i2, 10, 399) == o2) {
    std::cout << "Test 2 exitoso" << endl;
  } else {
    std::cout << "Test 2 fallido" << endl;
  }

  if (Torneo(i3, 2, 4) == o3) {
    std::cout << "Test 3 exitoso" << endl;
  } else {
    std::cout << "Test 3 fallido" << endl;
  }

  if (Torneo(i4, 34, 80) == o4) {
    std::cout << "Test 4 exitoso" << endl;
  } else {
    std::cout << "Test 4 fallido" << endl;
  }
}
