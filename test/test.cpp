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
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
