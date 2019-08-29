//============================================================================
// Name        : FizzBuzz.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <gtest/gtest.h>
#include <math.h>
#include <string>

#include "fizzbuzz.h"
using namespace std;
using namespace FB;

TEST(fizzBuzz, RegularNumbers) {
  FizzBuzz fizzBuzz;
  ASSERT_EQ("1", fizzBuzz.getFizzBuzzNumber(1));
  ASSERT_EQ("2", fizzBuzz.getFizzBuzzNumber(2));
}

TEST(fizzBuzz, FizzNumbers) {
	FizzBuzz fizzBuzz;
	  ASSERT_EQ("fizz", fizzBuzz.getFizzBuzzNumber(3));
	  ASSERT_EQ("fizz", fizzBuzz.getFizzBuzzNumber(9));
}

TEST(fizzBuzz, BuzzNumbers) {
	FizzBuzz fizzBuzz;
	  ASSERT_EQ("buzz", fizzBuzz.getFizzBuzzNumber(5));
	  ASSERT_EQ("buzz", fizzBuzz.getFizzBuzzNumber(25));
}

TEST(fizzBuzz, FizzBuzzNumbers){
	FizzBuzz fizzBuzz;
	  ASSERT_EQ("fizzbuzz", fizzBuzz.getFizzBuzzNumber(15));
	  ASSERT_EQ("fizzbuzz", fizzBuzz.getFizzBuzzNumber(30));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
