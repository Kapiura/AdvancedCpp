#include <iostream>

// Task 2 - factorial by metaprogramming
template <typename T> class Factorial
{
};

template <> class Factorial<int>
{
public:
  static constexpr int
  factorial (int num)
  {
    return num <= 0 ? 1 : num * factorial (num - 1);
  };
};

int
main ()
{
  std::cout << Factorial<int>::factorial (0) << "\n";
  std::cout << Factorial<int>::factorial (1) << "\n";
  std::cout << Factorial<int>::factorial (2) << "\n";
  std::cout << Factorial<int>::factorial (3) << "\n";
  std::cout << Factorial<int>::factorial (4) << "\n";
  std::cout << Factorial<int>::factorial (5) << "\n";
  return 0;
}
