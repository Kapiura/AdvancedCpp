// Task 3 - namespace/class template - cpplab::vector
#include <cstddef>
#include <iostream>
#include <stdexcept>

namespace cpplab
{
template <typename T> class vector
{
public:
  vector () = default;
  ~vector () { delete[] _tab; };

  const size_t
  size () const
  {
    return _size;
  }
  const size_t
  capacity () const
  {
    return _capacity;
  }

  vector &
  operator= (const vector &rhs)
  {
    if (this == &rhs)
      return *this;

    delete[] _tab;
    _size = rhs.size ();
    _capacity = rhs.capacity ();
    _tab = new T[_capacity];

    for (size_t i = 0; i < _size; ++i)
      {
        _tab[i] = rhs._tab[i];
      }
    return *this;
  }
  void
  push_back (const T newElement)
  {
    if (_size == 0)
      {
        resize (1);
      }
    else if (_size + 1 > _capacity)
      {
        resize (_size * 2);
      }
    _tab[_size - 1] = newElement;
  }
  T &
  operator[] (int index)
  {
    if (index >= _size || index < 0)
      {
        throw std::out_of_range ("Index out of range :(\n");
      }
    return _tab[index];
  }

  T
  operator[] (int index) const
  {
    if (index >= _size || index < 0)
      {
        throw std::out_of_range ("Index out of range :(\n");
      }
    return _tab[index];
  }

  void
  reserve (size_t newCapacity)
  {
    T *temp = new T[newCapacity];
    _capacity = newCapacity;
    for (size_t i = 0; i < size (); i++)
      {
        temp[i] = _tab[i];
      }
    delete[] _tab;
    _tab = temp;
    delete[] temp;
  }

  void
  resize (size_t newSize)
  {
    if (newSize > capacity ())
      {
        reserve (newSize * 2);
      }
    else
      {
        if (newSize < size ())
          {
            _capacity = newSize;
            return;
          }
        else
          {
          }
      }

    if (newSize <= _capacity)
      {
        if (newSize < _size)
          {
            _capacity = newSize;
            return;
          }
        for (size_t i = _size; i < newSize; ++i)
          {
            _tab[i] = temp[i];
          }
        _size = newSize;
        return;
      }
    else
      {
        T *temporaryTab = new T[newSize];
        for (size_t i = 0; i < newSize; ++i)
          {
            if (i < _size)
              {
                temporaryTab[i] = _tab[i];
              }
            else
              {
                temporaryTab[i] = T{};
              }
          }
        _size = newSize;
        _capacity = newSize;
        delete[] _tab;
        _tab = temporaryTab;
      }
  }

private:
  T value_type{};
  T *_tab = nullptr;
  size_t _size = 0;
  size_t _capacity = 0;
};
} // namespace cpplab

int
main ()
{
  // Task 3 - cpplab::vector
  cpplab::vector<int> myVector;
  std::cout << myVector.size () << "\n"; // 0
  std::cout << myVector.capacity () << "\n";
  myVector.push_back (1);
  std::cout << myVector.size () << "\n"; // 0
  std::cout << myVector.capacity () << "\n";
  myVector.push_back (1);
  std::cout << myVector.size () << "\n"; // 0
  std::cout << myVector.capacity () << "\n";
  myVector.push_back (1);
  std::cout << myVector.size () << "\n"; // 0
  std::cout << myVector.capacity () << "\n";
}
