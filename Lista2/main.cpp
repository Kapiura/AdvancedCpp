#include <iostream>
#include <vector>

// Task 2 from List 1 - insert_sort function
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

// Task 1 - natural order
template <>
std::vector<std::string>
insert_sort (std::vector<std::string> &vec)
{
  if (vec.size () <= 1)
    return vec;
  for (int i = 1; i < vec.size (); i++)
    {
      int currItem = i;
      while (currItem > 0 && vec[currItem].size () < vec[currItem - 1].size ())
        {
          std::swap (vec[currItem], vec[currItem - 1]);
          currItem--;
        }
    }
  return vec;
}

int
main ()
{
  std::vector<std::string> unsortedCharVector
      = { "abc", "abcd", "aaa", "aa", "abaca" };
  std::cout << "Unsorted vector:\n"
            << unsortedCharVector << "Sorted vector :\n";
  std::cout << insert_sort (unsortedCharVector) << "\n";

  unsortedCharVector = { "ananas", "banan", "morela", "brokul", "dzem" };
  std::cout << "Unsorted vector:\n"
            << unsortedCharVector << "Sorted vector :\n";
  std::cout << insert_sort (unsortedCharVector) << "\n";

  unsortedCharVector = { "goat", "tower", "know", "olo" };
  std::cout << "Unsorted vector:\n"
            << unsortedCharVector << "Sorted vector :\n";
  std::cout << insert_sort (unsortedCharVector) << "\n";
}
