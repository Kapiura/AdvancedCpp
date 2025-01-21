#include <iostream>
#include <vector>

namespace cpplab
{
    template <typename T>
    class allocator
    {
        public:
            using value_type = T;
            value_type* allocate(std::size_t n)
            {
                return new value_type(n); 
            };
            void deallocate(value_type* p, std::size_t n)
            {
                delete [] p;
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
