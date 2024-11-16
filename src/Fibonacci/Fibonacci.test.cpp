// Unit test for Fibonacci::get()

#include "Fibonacci.hpp"
#include <gtest/gtest.h>
TEST(FibonacciTest, GetCorrectFibonacciNumber) {
  // Test case 1: positive integer input
  EXPECT_EQ(Fibonacci::get(0), 0);
  EXPECT_EQ(Fibonacci::get(1), 1);
  EXPECT_EQ(Fibonacci::get(2), 1);
  EXPECT_EQ(Fibonacci::get(3), 2);
  EXPECT_EQ(Fibonacci::get(4), 3);
  EXPECT_EQ(Fibonacci::get(5), 5);
  EXPECT_EQ(Fibonacci::get(6), 8);
  EXPECT_EQ(Fibonacci::get(10), 55);
  EXPECT_EQ(Fibonacci::get(20), 6765);
  EXPECT_EQ(Fibonacci::get(30), 832040);
  EXPECT_EQ(Fibonacci::get(40), 102334155);
}

TEST(FibonacciTest, GetCorrectLastDigitForSpecificFibonacciNumbers) {
  EXPECT_EQ(Fibonacci::get_last_digit(13), 3);
  EXPECT_EQ(Fibonacci::get_last_digit(21), 6);
  EXPECT_EQ(Fibonacci::get_last_digit(34), 7);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}