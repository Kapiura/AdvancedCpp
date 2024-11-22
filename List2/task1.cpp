#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

// Task 2 from list 1
// Złożoność : O(n)
template <typename T>
std::vector<T>
insert_sort (std::vector<T> &vec)
{
  if (vec.size () < 1)
    return vec;
  for (size_t i = 1; i < vec.size (); i++)
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

// Task 1
template <>
std::vector<std::string>
insert_sort (std::vector<std::string> &vec)
{
  for (size_t i = 1; i < vec.size (); i++)
    {
      size_t currItem = i;
      while (currItem > 0)
        {
          const std::string &a = vec[currItem];
          const std::string &b = vec[currItem - 1];

          size_t idx_a = 0, idx_b = 0;
          bool less = false, equal = true;

          while (idx_a < a.size () && idx_b < b.size ())
            {
              if (std::isdigit (a[idx_a]) && std::isdigit (b[idx_b]))
                {
                  int num_a = 0, num_b = 0;
                  while (idx_a < a.size () && std::isdigit (a[idx_a]))
                    {
                      num_a = num_a * 10 + (a[idx_a] - '0');
                      idx_a++;
                    }
                  while (idx_b < b.size () && std::isdigit (b[idx_b]))
                    {
                      num_b = num_b * 10 + (b[idx_b] - '0');
                      idx_b++;
                    }
                  if (num_a != num_b)
                    {
                      less = num_a < num_b;
                      equal = false;
                      break;
                    }
                }
              else
                {
                  if (a[idx_a] != b[idx_b])
                    {
                      less = a[idx_a] < b[idx_b];
                      equal = false;
                      break;
                    }
                  idx_a++;
                  idx_b++;
                }
            }
          if (equal)
            less = a.size () < b.size ();

          if (!less)
            break;
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
  for (size_t i = 0; i < vec.size (); ++i)
    {
      os << vec[i];
      if (i < vec.size () - 1)
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
  std::vector<std::string> items
      = { "zad10", "zad1", "zad2", "zad20", "zad3" };
  std::cout << "Before sorting: " << items;
  insert_sort (items);
  std::cout << "After sorting: " << items;
  return 0;
}
