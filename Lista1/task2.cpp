// Kacper Wiszniewski
// ISSP
// 2024
#include <iostream>
#include <iterator>
#include <vector>

// Task 2 - insert_sort function
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

int
main ()
{
  // Task 2 - insert_sort function
  std::cout << "\nTask 2\n\n";
  std::vector<int> unsortedIntVector = { 5, 3, 1, 4, 2, 9, 7, 8, 6 };
  std::cout << "Unsorted vector:\n"
            << unsortedIntVector
            << "Sorted
      vector :\n ";
      std::cout
            << insert_sort (unsortedIntVector)
            << "\n";

  std::vector<double> unsortedDoubleVector
      = { 5.12, 5.13, 5.1, 5.0, 5.009, 5.123, 5.01, 5.11, 5.12 };
  std::cout << "Unsorted vector:\n" << unsortedDoubleVector << "Sorted vector:\n";
  std::cout << insert_sort (unsortedDoubleVector) << "\n";

  std::vector<char> unsortedCharVector = { 'x', 'i', 'c', 't', 'a' };
  std::cout << "Unsorted vector:\n"
            << unsortedCharVector
            << "Sorted
      vector :\n ";
      std::cout
            << insert_sort (unsortedCharVector)
            << "\n";
}