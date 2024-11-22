// Task 3 - namespace/class template - cpplab::vector
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace cpplab
{
template <typename T> class vector
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

  const size_t size () const { return _size; }
  const size_t capacity () const { return _capacity; }

  vector &operator= (const vector &rhs)
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
    // _size++;
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

int main ()
{
  // Task 3 - cpplab::vector
  // integers
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

  // dot product operation
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

  // it can be done, but it doesnt make sense to me and the result is weird
  cpplab::vector<char> v5 {'a', 'b', 'c', 'd'};
  std::vector<char> v6 {'a', 'b', 'c', 'd'};
  char res5 = v5 * v6;
  char res6 = v6 * v5;
  std::cout << res5 << "\n";
  std::cout << res6 << "\n";

}
