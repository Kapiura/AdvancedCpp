#include <iostream>

void
print_all ()
{
  std::cout << "\n";
}

template <typename T, typename... C>
void
print_all (const T &first, const C... rest)
{
  std::cout << first << "\n";
  print_all (rest...);
}

int
main ()
{
  print_all (1, 1.0, 1.0f, "hello");
  print_all (1, 2.0);
}
