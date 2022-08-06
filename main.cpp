/**
 * @file main.cpp
 * @author sarace (ttxs69@huisa.win)
 * @brief
 * @version 0.1
 * @date 2022-08-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
int main() {
  // print question
  std::cout << "Please give me your best number:" << std::endl;
  int some_number;
  std::cin >> some_number;
  std::cout << "Your best number is: " << some_number << std::endl;
  std::cerr << "ERROR: this is a error message!" << std::endl;
  return 0;
}
