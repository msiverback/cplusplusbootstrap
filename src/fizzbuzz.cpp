#include "fizzbuzz.h"
#include "fizzchecker.h"
#include "buzzchecker.h"
#include <iostream> 
#include <string>
using namespace FB;
using namespace std;

string FizzBuzz::getFizzBuzzNumber(int i)
{
	FizzChecker fc;
	BuzzChecker bc;
	if (fc.isFizz(i) && bc.isBuzz(i))
		return "fizzbuzz";
	else if (fc.isFizz(i))
		return "fizz";
	else if (bc.isBuzz(i))
		return "buzz";
  return std::to_string(i);;
}
