
// Task 3 - namespace/class template - cpplab::vector
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
		~vector ()
		{
			delete[] _tab;
			value_type *_tab = nullptr;
			size_t _size = 0;
			size_t _capacity = 0;
		};

		const size_t size () const
		{
			return _size;
		}
		const size_t capacity () const
		{
			return _capacity;
		}

		vector &operator= (const vector &rhs)
		{
			if (this == &rhs)
				return *this;

			delete[] _tab;
			_size = rhs.size ();
			_capacity = rhs.capacity ();
			_tab = new value_type[ _capacity ];

			for (size_t i = 0; i < _size; ++i)
			{
				_tab[ i ] = rhs._tab[ i ];
			}
			return *this;
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

template <typename T>
concept VectorType = requires (T a)
{
  std::is_arithmetic_v<T>;
  a[0];
  a.size();
};

template <VectorType V1, VectorType V2> 
auto operator* (const V1 &vec1, const V2 &vec2)
{
	using ResultType = decltype (vec1[ 0 ] * vec2[ 0 ]);

	ResultType result = ResultType{};
	for (size_t i = 0; i < vec1.size (); i++)
	{
		result += vec1[ i ] * vec2[ i ];
	}
	return result;
}

int main ()
{
	cpplab::vector<int> v1{1, 2, 3, 4};
	std::vector<int> v2{1, 2, 3, 4};
	int res1 = v1 * v2;
	int res2 = v2 * v1;
	std::cout << res1 << "\n";
	std::cout << res2 << "\n";

	cpplab::vector<float> v3{1.0, 2.0, 3.0, 4.0};
	std::vector<float> v4{1.0, 2.0, 3.0, 4.0};
	float res3 = v3 * v4;
	float res4 = v4 * v3;
	std::cout << res3 << "\n";
	std::cout << res4 << "\n";

  // doesnt work, cuz char isnt arithmetic
	//cpplab::vector<char> v5{'a', 'b', 'c', 'd'};
	//std::vector<char> v6{'w', 'x', 'y', 'z'};
	//std::string res5 = v5 * v6;
	//std::string res6 = v6 * v5;
	//std::cout << res5 << "\n";
	//std::cout << res6 << "\n";

  // doesnt work, cuz string isnt arithmetic
	cpplab::vector<std::string> v7{"Hello", "world"};
	std::vector<std::string> v8{"essa"
								"skibidi"};
	std::string res7 = v7 * v8;
	std::string res8 = v8 * v7;
	std::cout << res7 << "\n";
	std::cout << res8 << "\n";

	return 0;
}
