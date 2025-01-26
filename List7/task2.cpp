#include <iostream>
#include <vector>

namespace cpplab
{
    template <typename T>
    class allocator
    {
        public:
            using value_type = T;
            value_type* allocate(size_t n)
            {
              void* ptr = ::operator new(n * sizeof(value_type));
              return static_cast<value_type*>(ptr);
            }
            void deallocate(value_type* p, size_t n)
            {
              for(size_t i = 0; i<n ; i++)
              {
                p[i].~value_type();
              }
              ::operator delete(p);
            };
        private:
    };
}

int main()
{
    cpplab::allocator<int> alloc;
    std::cout << typeid(cpplab::allocator<int>::value_type).name() << std::endl;
    
    cpplab::allocator<int>::value_type* p_test = alloc.allocate(1);
    std::cout << *p_test << "\n";
    *p_test = 3;
    std::cout << *p_test << "\n";
    alloc.deallocate(p_test,1);
    
    std::vector<int, cpplab::allocator<int>> v;
    v.push_back(13);
    v.push_back(23);
    
    std::cout <<*(v.end()-1) << "\n";
  return 0;
}
