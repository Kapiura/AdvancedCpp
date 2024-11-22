// Task 1 - wielka piatka
#include <concepts>
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <type_traits>
#include <vector>

namespace cpplab
{
	template <typename T> class vector
	{
	  public:
		vector () = default;
		vector (std::initializer_list<T> list)
		{
			for (const T &el: list)
			{
				push_back (el);
			}
		}
		vector(const vector& rhs)	// konstruktor kopiujacy
		{

			this->resize(rhs.size());
			this->_capacity = rhs.capacity();
			for (size_t i = 0; i < rhs.size(); i++)
				*(_tab + i) = rhs[i];
		}
		~vector ()	// destruktor
		{
			delete[] _tab;
			value_type *_tab = nullptr;
			size_t _size = 0;
			size_t _capacity = 0;
		};
		vector& operator=(const vector& rhs) // operator = kopiujacy l-value
		{
			if(this == &rhs)
				return *this;
			delete[] _tab;
			resize(rhs.size());
			_capacity = rhs.capacity();
			for (size_t i = 0; i < _size; ++i)
			{
				_tab[ i ] = rhs._tab[ i ];
			}
			return *this;
		}
		vector& operator=(vector&& rhs) noexcept {
    			if (this != &rhs) 
			{ 
        			delete[] _tab;

        			_size = rhs._size;
        			_capacity = rhs._capacity;
        			_tab = rhs._tab;

        			rhs._size = 0;
        			rhs._capacity = 0;
        			rhs._tab = nullptr;
    			}
    			return *this;
		}
		vector(vector&& rhs) noexcept
    		: _size(rhs._size), _capacity(rhs._capacity), _tab(rhs._tab) 
		{
    			rhs._size = 0;
    			rhs._capacity = 0;
    			rhs._tab = nullptr;
		}

		bool emplace_back()
		{
			return 0;
		}
		const size_t size () const
		{
			return _size;
		}
		const size_t capacity () const
		{
			return _capacity;
		}
		void push_back (const T &newElement)
		{
			if (size () == 0)
			{
				resize (1);
			}
			else if (size () >= capacity ())
			{
				resize (size () + 1);
			}
			else if (size () < capacity ())
			{
				_size++;
			}
			// _size++;
			_tab[ size () - 1 ] = newElement;
		}

		void pop_back ()
		{
			if (size () > 0)
			{
				_size--;
			}
			else if (size () == 0)
			{
				throw std::out_of_range ("Cannot pop_back from an empty vector\n");
			}
		}

		void resize (size_t newSize)
		{
			if (size () < newSize)
			{
				reserve (newSize * 2);
			}
			_size = newSize;
		}

		T &operator[] (const int &index)
		{
			if (index >= _size || index < 0)
			{
				throw std::out_of_range ("Index out of range\n");
			}
			return _tab[ index ];
		}

		T operator[] (const int &index) const
		{
			if (index >= _size || index < 0)
			{
				throw std::out_of_range ("Index out of range\n");
			}
			return _tab[ index ];
		}

		friend std::ostream &operator<< (std::ostream &os, const vector &vec)
		{
			os << "[";
			for (size_t i = 0; i < vec.size (); i++)
			{
				if (i == vec.size () - 1)
					os << vec[ i ];
				else
					os << vec[ i ] << ", ";
			}
			os << "]\n";
			return os;
		}

		void printVectorInfo ()
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
			value_type *temp = new value_type[ newCapacity ];
			for (size_t i = 0; i < size (); i++)
			{
				temp[ i ] = _tab[ i ];
			}
			_capacity = newCapacity;
			delete[] _tab;
			_tab = temp;
		}
	};
} // namespace cpplab

class Pixel
{
public:
	Pixel() = default;
	Pixel(int r, int g, int b):
		r(r), g(g), b(b)
	{}
private:
	int r, g, b;
};


int main ()
{
	std::cout << "\ntask1\n\n";
	cpplab::vector<int> v1{1, 2, 3, 4};
	std::cout << "v1\n";
	v1.printVectorInfo();
	cpplab::vector<int> v2(std::move(v1));
	std::cout << "v1 - konstruktor przenoszacy - przenioeosne na v2\n";
	v1.printVectorInfo();
	std::cout << "v2 - konstruktor przenoszacy - przeniesieony z v1\n";
	v2.printVectorInfo();
	v1 = std::move(v2);
	std::cout << "v1 - operator przenoszacy - preniesienie v2 na v1 \n";
	v1.printVectorInfo();
	std::cout << "v2 - operator przenoszacy - preniesienie v2 na v1 \n";
	v2.printVectorInfo();
	cpplab::vector<int> v3(v1);
	std::cout << "v3 - konstruktor kopiujacy - skopiowanie z v1 na v3 \n";
	v3.printVectorInfo();
	std::cout << "v1 - konstruktor kopiujacy - skopiowanie z v1 na v3 \n";
	v1.printVectorInfo();
	v2 = v3;
	std::cout << "v2 - operator kopiujacy - skopiowanie z v3 na v2 \n";
	v2.printVectorInfo();
	std::cout << "v3 - operator kopiujacy - skopiowanie z v3 na v2 \n";
	v3.printVectorInfo();

	std::cout << "\ntask2\n";
}
