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

template <typename T>
std::vector<T*>
as_sorted_view (std::vector<T> &vec)
{
  std::vector<T*> ptrVec;
  for(auto &el: vec)
    ptrVec.push_back(&el);
  std::sort(ptrVec.begin(), ptrVec.end(), [](const T* a, const T* b) { return *a < *b;});
  return ptrVec;
}

int main ()
{
  std::vector<int> v1
      = { 54, 123, 65, 3, 1, 65, 0, -2, 5, 645, 22, 44, 23, 21 };
  std::cout << "not sorted: " << v1;
  std::vector<int*> v1Out = as_sorted_view (v1);
  std::cout << "sorted: {";
  for(auto &el: v1Out)
    std::cout << *el << " ";
  std::cout << "}\nstill not sorted: " << v1 << "\n";

  std::vector<std::string> v2
      = { "Anna", "Bartek", "Marek", "Ziut", "Bozydar", "Jezus" };
  std::cout << "not sorted: " << v2;
  std::vector<std::string*> v2Out = as_sorted_view (v2);
  std::cout << "sorted: {";
  for(auto &el: v2Out)
    std::cout << *el << " ";
  std::cout << "}\nstill not sorted: " << v2 << "\n";

  std::vector<char> v3 = { 'a', 's', 'x', 'c', 'w', 'q', 'p' };
  std::cout << "not sorted: " << v3;
  std::vector<char*> v3Out = as_sorted_view (v3);
  std::cout << "sorted: {";
  for(auto &el: v3Out)
    std::cout << *el << " ";
  std::cout << "}\nstill not sorted: " << v3 << "\n";
}
