// Kacper Wiszniewski
// ISSP
// 2024
#include <iostream>
#include <stdexcept>
#include <vector>

// Task 1 - my_max function
template <typename T, typename C>
T my_max (const T& a, const T& b, C comp)
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

// Task 2 - insert_sort function
// Złożoność : O(n)
template <typename T>
std::vector<T> insert_sort (std::vector<T> &vec)
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

// Task 3 - namespace/class template - cpplab::vector
namespace cpplab
{
template <typename T>
class vector
{
public:
  vector () = default;
  vector(std::initializer_list<T> list)
  {
    for(const T& el: list)
    {
      push_back(el);
    }

  }
  ~vector ()
  {
    delete[] _tab;
    value_type *_tab = nullptr;
    size_t _size = 0;
    size_t _capacity = 0;
  };

  const size_t size() const { return _size; }
  const size_t capacity() const { return _capacity; }

  vector &operator=(const vector &rhs)
  {
    if (this == &rhs)
      return *this;

    delete[] _tab;
    _size = rhs.size ();
    _capacity = rhs.capacity ();
    _tab = new value_type[_capacity];

    for (size_t i = 0; i < _size; ++i)
    {
      _tab[i] = rhs._tab[i];
    }
    return *this;
  }

  void push_back (const T &newElement)
  {
    if(size() == 0)
    {
      resize(1);
    }
    else if(size() >= capacity())
    {
      resize(size()+1);
    }
    else if(size() < capacity())
    {
      _size++;
    }
    _tab[size() - 1] = newElement;
  }

  void pop_back()
  {
    if(size() > 0)
    {
      _size--;
    }
    else if(size() == 0)
    {
      throw std::out_of_range ("Cannot pop_back from an empty vector\n");
    }
  }

void resize(size_t newSize)
{
  if(size() < newSize)
  {
    reserve(newSize*2);
  }
  _size = newSize;
}

    T &operator[] (const int& index)
  {
    if (index >= _size || index < 0)
    {
      throw std::out_of_range ("Index out of range\n");
    }
    return _tab[index];
  }

  T operator[] (const int &index) const
  {
    if (index >= _size || index < 0)
    {
      throw std::out_of_range ("Index out of range\n");
    }
    return _tab[index];
  }

friend std::ostream & operator<< (std::ostream &os, const vector& vec)
{
    os << "[";
    for(size_t i = 0; i < vec.size(); i++)
    {
      if(i == vec.size() - 1)
        os << vec[i];
      else
                os << vec[i] << ", ";
    }
        os << "]\n";
    return os;
}

  void printVectorInfo()
  {
    std::cout << "SIZE:" << size () << "\n"; // 0
    std::cout << "CAPACITY:" << capacity () << "\n";
    std::cout << *this;
    std::cout << "--------------------------------\n";
  }

private:
  typedef T value_type;
  value_type *_tab = nullptr;
  size_t _size = 0;
  size_t _capacity = 0;

  void reserve (size_t newCapacity)
  {
    value_type *temp = new value_type[newCapacity];
    for (size_t i = 0; i < size(); i++)
    {
      temp[i] = _tab[i];
    }
    _capacity = newCapacity;
    delete[] _tab;
    _tab = temp;
  }
};
} // namespace cpplab

template <typename V, typename T>
auto operator*(const V& vec1,const T& vec2)
{
    try
    {
        if(vec1.size() != vec2.size())
        {
            throw std::invalid_argument("size of vectors must be equal\n");
        }
        else if(vec1.size() == 0 || vec2.size() == 0)
        {
            throw std::invalid_argument("vectors cannot be empty\n");
        }
        else if(typeid(vec1[0]) != typeid(vec2[0]))
        {
            throw std::invalid_argument("vectors must be the same type\n");
        }

        typedef decltype(vec1[0] * vec2[0]) resultType;
        resultType result = resultType();
        for(size_t i = 0; i < vec1.size(); i++)
            result += vec1[i] * vec2[i];
        return result;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << "\n";
        throw;
    }

}


int main()
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
  auto compVector = [] (std::vector<int> x, std::vector<int> y) { return x.size () < y.size () ? y : x; };
  std::cout << my_max (aVector, bVector, compVector);

   // Task 2 - insert_sort function
  std::cout << "\nTask 2\n\n";
  std::vector<int> unsortedIntVector = { 5, 3, 1, 4, 2, 9, 7, 8, 6 };
  std::cout << "Unsorted vector:\n" << unsortedIntVector << "Sorted vector :\n ";
  std::cout << insert_sort (unsortedIntVector) << "\n";

  std::vector<double> unsortedDoubleVector = { 5.12, 5.13, 5.1, 5.0, 5.009, 5.123, 5.01, 5.11, 5.12 };
  std::cout << "Unsorted vector:\n" << unsortedDoubleVector << "Sorted vector:\n";
  std::cout << insert_sort (unsortedDoubleVector) << "\n";

  std::vector<char> unsortedCharVector = { 'x', 'i', 'c', 't', 'a' };
  std::cout << "Unsorted vector:\n" << unsortedCharVector << "Sorted vector :\n ";
  std::cout << insert_sort (unsortedCharVector) << "\n";

  // Task 3 - cpplab::vector
  // integers
  std::cout << "\nTask 3\n\n";
  cpplab::vector<int> myVector;
  myVector.printVectorInfo();

  myVector.push_back(1);
  myVector.push_back(2);
  myVector.push_back(3);
  myVector.push_back(4);
  myVector.printVectorInfo();

  myVector.pop_back();
  myVector.printVectorInfo();

  myVector[0] = 9;
  myVector[1] = 8;
  myVector[2] = 6;
  myVector.printVectorInfo();

  myVector.resize(10);
  myVector.printVectorInfo();

  myVector.resize(1);
  myVector.printVectorInfo();

  // chars
  cpplab::vector<char> myVecChar;
  myVecChar.printVectorInfo();

  myVecChar.push_back('a');
  myVecChar.push_back('b');
  myVecChar.push_back('c');
  myVecChar.push_back('d');
  myVecChar.printVectorInfo();

  myVecChar.pop_back();
  myVecChar.printVectorInfo();

  myVecChar[0] = 'x';
  myVecChar[1] = 'y';
  myVecChar[2] = 'z';
  myVecChar.printVectorInfo();

  myVecChar.resize(9);
  myVecChar.printVectorInfo();

  myVecChar.resize(2);
  myVecChar.printVectorInfo();

  // std::string
  cpplab::vector<std::string> myVecStr;
  myVecStr.printVectorInfo();

  myVecStr.push_back("sigma");
  myVecStr.push_back("gyatt");
  myVecStr.push_back("simba");
  myVecStr.push_back("pumba");
  myVecStr.printVectorInfo();

  myVecStr.pop_back();
  myVecStr.printVectorInfo();

  myVecStr[0] = "essa";
  myVecStr[1] = "lol";
  myVecStr[2] = "magik";
  myVecStr.printVectorInfo();

  myVecStr.resize(12);
  myVecStr.printVectorInfo();

  myVecStr.resize(1);
  myVecStr.printVectorInfo();

  // c) dot product operation
  cpplab::vector<int> v1 {1, 2, 3, 4};
  std::vector<int> v2 {1, 2, 3, 4};
  int res1 = v1 * v2;
  int res2 = v2 * v1;
  std::cout << res1 << "\n";
  std::cout << res2 << "\n";

  cpplab::vector<float> v3 {1.0, 2.0, 3.0, 4.0};
  std::vector<float> v4 {1.0, 2.0, 3.0, 4.0};
  float res3 = v3 * v4;
  float res4 = v4 * v3;
  std::cout << res3 << "\n";
  std::cout << res4 << "\n";
}