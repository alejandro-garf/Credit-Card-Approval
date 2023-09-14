// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 2-1

#include <iostream>

int main() {
  const int min_height = 55;
  int user_height = 0;

  std::cout << "You must be at least 55 inches to safely ride the TuffyTwister."
            << std::endl;
  std::cout << "Please enter yout height in inches: ";
  std::cin >> user_height;

  if (user_height >= min_height) {
    std::cout << "Congratulations! You are tall enough to ride!" << std::endl;
  } else {
    std::cout << "Safety is our first priority. Unfortunately, we can't let "
                 "you ride yet."
              << std::endl;
  }

  return 0;
}
