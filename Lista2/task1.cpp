#include <iostream>
#include <vector>

// Task 2 from list 1
// Złożoność : O(n)
template <typename T>
std::vector<T>
insert_sort (std::vector<T> &vec)
{
  if (vec.size () < 1)
    return vec;
  for (int i = 1; i < vec.size (); i++)
    {
      int currItem = i;
      while (currItem > 0 && vec[currItem] < vec[currItem - 1])
        {
          std::swap (vec[currItem], vec[currItem - 1]);
          currItem--;
        }
    }
  return vec;
}

template <typename T>
std::ostream &
operator<< (std::ostream &os, const std::vector<T> &vec)
{
  os << "{";
  for (const auto &el : vec)
    {
      os << el;
      if (el != vec[vec.size () - 1])
        {
          os << ", ";
        }
    }
  os << "}\n";
  return os;
}

template <>
std::vector<std::string>
insert_sort (std::vector<std::string> &vec)
{
  vec = insert_sort (vec);
  return vec;
}

int
main ()
{
  std::vector<std::string> first = {};
  std::cout << insert_sort ()
}
