// Alejandro Fonseca
// CPSC 121L-06
// 9/13/2023
// gfon@csu.fullerton.edu
// alejandro-garf
//
// Lab 2-2

#include <iostream>

int main() {
  int user_credit_score = 0;
  const int min_score = 0;
  const int max_score = 850;

  std::cout << "Thank you for applying for the Tuffy Credit card. Please enter "
               "your credit score."
            << std::endl;
  std::cout << "Credit Score: ";
  std::cin >> user_credit_score;
  std::cout << std::endl;

  if (user_credit_score >= min_score && user_credit_score <= max_score) {
    if (user_credit_score < 580) {
      std::cout << "Unfortunately, you are ineligible for Tuffy credit cards "
                   "at the moment. Please try again at a later date."
                << std::endl;
      std::cout << "Thank you for using our program, please come again!"
                << std::endl;
    } else if (user_credit_score < 670) {
      std::cout << "You are eligible for the Silver Tuffy Card." << std::endl;
      std::cout << "Thank you for using our program, please come again!"
                << std::endl;
    } else if (user_credit_score < 800) {
      std::cout << "You are eligible for the Gold Tuffy Card." << std::endl;
      std::cout << "Thank you for using our program, please come again!"
                << std::endl;
    } else if (user_credit_score < 850) {
      std::cout << "You are eligible for the Platinum Tuffy Card." << std::endl;
      std::cout << "Thank you for using our program, please come again!"
                << std::endl;
    }
  } else {
    std::cout << "That is an invalid credit score. Please run the program "
                 "again and provide a valid credit score."
              << std::endl;
  }

  return 0;
}
