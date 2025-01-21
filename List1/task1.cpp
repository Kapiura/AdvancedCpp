#include <iostream>
#include <iterator>
#include <vector>

// Task 1 - my_max function
template <typename T, typename C>
T
my_max (T a, T b, C comp)
{
  return comp (a, b);
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec)
{
  os << "{";
  for (const auto &el : vec)
  {
    os << el;
    if (el != vec[vec.size() - 1])
    {
      os << ", ";
    }
  }
  os << "}\n";
  return os;
}

int
main ()
{
  // Task 1 - my_max function
  std::cout << "Task 1\n\n";
  int aInt = 1;
  int bInt = 2;
  auto compInt = [] (int x, int y) { return x < y ? y : x; };
  std::cout << my_max (aInt, bInt, compInt) << "\n";

  double aDouble = 1.12;
  double bDouble = 2.123123;
  auto compDouble = [] (double x, double y) { return x < y ? y : x; };
  std::cout << my_max (aDouble, bDouble, compDouble) << "\n";

  char aChar = 'a';
  char bChar = 'x';
  auto compChar = [] (int x, int y) { return x < y ? y : x; };
  std::cout << my_max (aChar, bChar, compChar) << "\n";

  std::vector<int> aVector = { 1, 2, 3 };
  std::vector<int> bVector = { 1 };
  auto compVector
      = [] (std::vector<int> x, std::vector<int> y) { return x.size () < y.size () ? y : x; };
  std::cout << my_max (aVector, bVector, compVector);
}
