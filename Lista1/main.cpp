// Kacper Wiszniewski
// ISSP
// 2024
#include <iostream>
#include <iterator>
#include <utility>
#include <vector>

// Task 1 - my_max function
template <typename T, typename C> T my_max(T a, T b, C comp) {
  return comp(a, b);
}

// I overloaded an operator to better display vector
template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec) {
  os << "{";
  for (const auto &el : vec) {
    os << el;
    if (el != vec[vec.size() - 1]) {
      os << ", ";
    }
  }
  os << "}\n";
  return os;
}

// Task 2 - insert_sort function
// zlosonosc : n()
template <typename T> std::vector<T> insert_sort(std::vector<T> &vec) {
  if (vec.size() < 1)
    return vec;
  for (int i = 1; i < vec.size(); i++) {
    int currItem = i;
    while (currItem > 0 && vec[currItem] < vec[currItem - 1]) {
      std::swap(vec[currItem], vec[currItem - 1]);
      currItem--;
    }
  }
  return vec;
}

// Task 3 - namespace/class template
namespace cpplab {
template <typename T> class vector {
public:
  vector() : _size(0), _capacity(0), _tab(nullptr) {};

  ~vector() { delete[] _tab; };

  void resize() {
    T *tempTab = _tab;
    delete[] _tab;
    _capacity += 2;
    _tab = new T[_capacity];
    for (size_t i = 0; i < sizeof(tempTab); i++) {
      _tab[i] = tempTab[i];
    }
  }

  void push_back(const T newElement) {
    if (_capacity == _size) {
      resize();
    }
    _tab[_size++] = newElement;
  }

  /* void reserve(size_t newCapacity)  */
  /* { */
  /*   T* tempTab = _tab; */
  /*   delete[] _tab; */
  /*   _tab = new T; */
  /*   _capacity = newCapacity; */
  /* } */

  // getters
  const size_t get_size() { return _size; };
  const size_t get_capacity() { return _capacity; };

private:
  T _valueType;
  T *_tab;
  size_t _size;
  size_t _capacity;
};
} // namespace cpplab

int main() {
  // Task 1 - my_max function
  std::cout << "Task 1\n\n";
  int aInt = 1;
  int bInt = 2;
  auto compInt = [](int x, int y) { return x < y ? y : x; };
  std::cout << my_max(aInt, bInt, compInt) << "\n";

  double aDouble = 1.12;
  double bDouble = 2.123123;
  auto compDouble = [](double x, double y) { return x < y ? y : x; };
  std::cout << my_max(aDouble, bDouble, compDouble) << "\n";

  char aChar = 'a';
  char bChar = 'x';
  auto compChar = [](int x, int y) { return x < y ? y : x; };
  std::cout << my_max(aChar, bChar, compChar) << "\n";

  std::vector<int> aVector = {1, 2, 3};
  std::vector<int> bVector = {1};
  auto compVector = [](std::vector<int> x, std::vector<int> y) {
    return x.size() < y.size() ? y : x;
  };
  std::cout << my_max(aVector, bVector, compVector);

  // Task 2 - insert_sort function
  std::cout << "\nTask 2\n\n";
  std::vector<int> unsortedIntVector = {5, 3, 1, 4, 2, 9, 7, 8, 6};
  std::cout << "Unsorted vector:\n" << unsortedIntVector << "Sorted vector:\n";
  std::cout << insert_sort(unsortedIntVector) << "\n";

  std::vector<double> unsortedDoubleVector = {5.12,  5.13, 5.1,  5.0, 5.009,
                                              5.123, 5.01, 5.11, 5.12};
  std::cout << "Unsorted vector:\n"
            << unsortedDoubleVector << "Sorted vector:\n";
  std::cout << insert_sort(unsortedDoubleVector) << "\n";

  std::vector<char> unsortedCharVector = {'x', 'i', 'c', 't', 'a'};
  std::cout << "Unsorted vector:\n" << unsortedCharVector << "Sorted vector:\n";
  std::cout << insert_sort(unsortedCharVector) << "\n";

  // Task 3 - cpplab::vector
  cpplab::vector<int> myVector;
  myVector.push_back(2);
}
