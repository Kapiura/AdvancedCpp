#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Task 2 view as sorted vector of any type
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

// Przekazujemy jako arugment funkcji wartosc wektora
// Przez co pracujemy na kopii tego wektora czyli tak naprawde
// Na nowym obiekcie ktory nie wplywa na nasz oryginal
// Sortujemy, wyswietlamy posortowana kopie
// Wychodzac z funkcji nasza kopia jest usuwana
// Wiec po tej funkcji nasz wektor dalej jest tym samym ktorym byl
template <typename T>
void
as_sorted_view (std::vector<T> vec)
{
  std::sort (vec.begin (), vec.end ());
  std::cout << vec;
}

int
main ()
{
  std::vector<int> v1
      = { 54, 123, 65, 3, 1, 65, 0, -2, 5, 645, 22, 44, 23, 21 };
  std::cout << "not sorted: " << v1;
  std::cout << "sorted: ";
  as_sorted_view (v1);
  std::cout << "still not sorted: " << v1 << "\n";

  std::vector<std::string> v2
      = { "Anna", "Bartek", "Marek", "Ziut", "Bozydar", "Jezus" };
  std::cout << "not sorted: " << v2;
  std::cout << "sorted: ";
  as_sorted_view (v2);
  std::cout << "still not sorted: " << v2 << "\n";

  std::vector<char> v3 = { 'a', 's', 'x', 'c', 'w', 'q', 'p' };
  std::cout << "not sorted: " << v3;
  std::cout << "sorted: ";
  as_sorted_view (v3);
  std::cout << "still not sorted: " << v3 << "\n";
}
