#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP
#include <cassert>

// Задание 1
// Дано целое число 1≤n≤401≤n≤40, необходимо вычислить nn-е число Фибоначчи
// (напомним, что F0=0F0​=0, F1=1F1​=1 и
// Fn=Fn−1+Fn−2Fn​=Fn−1​+Fn−2​ при n≥2n≥2).
//  Sample Input: 3
//  Sample Output: 2
//
// Задание 2
// Дано число 1≤n≤1071≤n≤107, необходимо найти последнюю цифру nn-го числа
// Фибоначчи. Как мы помним, числа Фибоначчи растут очень быстро, поэтому при их
// вычислении нужно быть аккуратным с переполнением. В данной задаче, впрочем,
// этой проблемы можно избежать, поскольку нас интересует только последняя цифра
// числа Фибоначчи:
// если 0≤a,b≤90≤a,b≤9 — последние цифры чисел
// FiFi​ и
// Fi+1Fi+1​ соответственно, то (a+b) mod 10(a+b)mod10 —
// последняя цифра числа Fi+2Fi+2​.
//  Sample Input: 31
//  Sample Output: 9
//
// Задание 3
// Задача на программирование повышенной сложности: огромное число Фибоначчи по
// модулю Даны целые числа 1≤n≤10181≤n≤1018 и 2≤m≤1052≤m≤105, необходимо найти
// остаток от деления nn-го числа Фибоначчи на mm.

class Fibonacci {
private:
  int *arr;

public:
  Fibonacci(int number) {
    assert(number >= 0);
    this->arr = new int[number + 1];
    this->arr[0] = 0;
    this->arr[1] = 1;
    for (int i = 2; i <= number; i++) {
      this->arr[i] = this->arr[i - 1] + this->arr[i - 2];
    }
  }
  ~Fibonacci() { delete[] this->arr; }
  static int get(int number) {
    Fibonacci fib(number);
    return fib.arr[number];
  }
  static int get_last_digit(int number) {
    assert(number >= 0);
    int a = 0, b = 1;
    for (int i = 2; i <= number; i++) {
      int c = (a + b) % 10;
      a = b;
      b = c;
    }
    return b;
  }
  static int get_remainder(long long number_n, int number_m) {
    assert(number_n >= 1);
    assert(number_m >= 2);
    Fibonacci fib(number_n);
    int remainder = fib.arr[number_n] % number_m;
    if (remainder < 0) {
      remainder += number_m;
    }
    return remainder;
  }
};
#endif // FIBONACCI_HPP
