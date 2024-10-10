// Kacper Wiszniewski
// ISSP
// 2024
#include <iostream>
#include "vector.hpp"


int
main ()
{
  // Task 3 - cpplab::vector
  cpplab::vector<int> myVector;
  myVector.push_back (1);
  myVector.push_back (2);
  std::cout << myVector[0];
  std::cout << myVector[1];
  std::cout << myVector[2];
}
