#include "factorial.hpp"
#include <exception>

int factorial(int n)
{
  if (n < 0){
    throw std::runtime_error("Negative inputs are not supported");
  }  
  if(n == 0)
      return 1;

  return n * factorial(n-1);
}
