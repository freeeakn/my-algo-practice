#include "Fibonacci.hpp"
#include <iostream>

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get(n) << std::endl;
  std::cout << Fibonacci::get_last_digit(n) << std::endl;
  long long number_n;
  int number_m;
  std::cin >> number_n >> number_m;
  std::cout << Fibonacci::get_remainder(number_n, number_m) << std::endl;
  return 0;
}
