#ifndef VECTOR_H
#define VECTOR_H
// Task 3 - namespace/class template - cpplab::vector
#include <cstddef>

namespace cpplab
{
template <typename T>
class vector
{
public:
    vector();
    ~vector();

    const size_t size() const;
    const size_t capacity() const;

    vector& operator=(const vector& rhs);
    void push_back(const T newElement);
    T& operator[](int index);
    T operator[](int index) const;

    void resize(size_t newSize);

private:
    T* _tab = nullptr;
    size_t _size = 0;
    size_t _capacity = 0;
};
} // namespace cpplab

#endif // VECTOR_H
