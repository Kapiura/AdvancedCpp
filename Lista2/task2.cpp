#include <iostream>

// Task 2 - factorial by metaprogramming
constexpr int
factorial (const unsigned int &num)
{
  return num <= 1 ? 1 : num * factorial (num - 1);
}

template <>
class Factorial

    int
    main ()
{
  std::cout << factorial (5) << "\n";
  return 0;
}
