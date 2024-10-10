#include "vector.hpp"
#include <stdexcept>

namespace cpplab
{

template <typename T>
vector<T>::vector() = default;

template <typename T>
vector<T>::~vector() { delete[] _tab; }

template <typename T>
const size_t vector<T>::size() const { return _size; }

template <typename T>
const size_t vector<T>::capacity() const { return _capacity; }

template <typename T>
vector<T>& vector<T>::operator=(const vector& rhs)
{
    if (this == &rhs)
        return *this;

    delete[] _tab;
    _size = rhs.size();
    _capacity = rhs.capacity();
    _tab = new T[_capacity];

    for (size_t i = 0; i < _size; ++i)
    {
        _tab[i] = rhs._tab[i];
    }
    return *this;
}

template <typename T>
void vector<T>::push_back(const T newElement)
{
    if (_size == 0)
    {
        resize(1);
    }
    else if (_size + 1 > _capacity)
    {
        resize(_size * 2);
    }
    _tab[_size] = newElement;
    ++_size;
}

template <typename T>
T& vector<T>::operator[](int index)
{
    if (index >= _size || index < 0)
    {
        throw std::out_of_range("Index out of range :(");
    }
    return _tab[index];
}

template <typename T>
T vector<T>::operator[](int index) const
{
    if (index >= _size || index < 0)
    {
        throw std::out_of_range("Index out of range :(");
    }
    return _tab[index];
}

template <typename T>
void vector<T>::resize(size_t newSize)
{
    if (newSize <= _capacity)
    {
        if (newSize < _size)
        {
            _size = newSize;
            return;
        }
        for (size_t i = _size; i < newSize; ++i)
        {
            _tab[i] = T{};
        }
        _size = newSize;
        return;
    }
    else
    {
        T* temporaryTab = new T[newSize];
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
} // namespace cpplab
