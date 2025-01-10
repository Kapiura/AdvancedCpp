#include <iostream>
#include <optional>
#include <utility>

namespace cpplab
{
	template <typename T>
	class unique_ptr
	{
	  protected:
		T *pointer;

	  public:
		constexpr unique_ptr () : pointer (nullptr) {};
		constexpr unique_ptr (T data)
		{
			pointer = new T (data);
		}
		unique_ptr (T *data) : pointer (data) {};

		unique_ptr (unique_ptr &&rhs) : pointer (std::exchange (rhs.pointer, nullptr))
		{
		}
		unique_ptr &operator= (unique_ptr &&rhs)
		{
			if (this != &rhs)
			{
				reset ();
				pointer = std::exchange (rhs.pointer, nullptr);
			}
			return *this;
		}

		unique_ptr (const unique_ptr &) = delete;
		unique_ptr &operator= (const unique_ptr &) = delete;

		~unique_ptr ()
		{
			reset ();
		}

		void swap (cpplab::unique_ptr<T> &rhs)
		{
			std::swap (pointer, rhs.pointer);
		}

		void reset ()
		{
			delete pointer;
			pointer = nullptr;
		}

		void reset (T *newElement)
		{
			delete pointer;
			pointer = newElement;
		}

		T *release ()
		{
			T *oldPtr = pointer;
			pointer = nullptr;
			return oldPtr;
		}

		constexpr T *get () const
		{
			return pointer;
		}
		bool operator== (std::nullopt_t) const
		{
			return pointer == nullptr;
		}
		bool operator!= (std::nullopt_t) const
		{
			return pointer != nullptr;
		}
		unique_ptr operator* () const
		{
			return *pointer;
		}
		unique_ptr operator->() const
		{
			return pointer;
		}
	};

	template <typename T>
	class non0_ptr
	{
	  protected:
		T *pointer;

	  public:
		constexpr non0_ptr () = default;
		constexpr non0_ptr (T data)
		{
			pointer = new T (data);
		}
		non0_ptr (T *data) : pointer (data)
		{
			if(data != nullptr)
				pointer = data;
			else
				throw std::runtime_error("nullptr");
		};

		non0_ptr (non0_ptr &&rhs)
		{
			if(&rhs != nullptr)
				pointer = &rhs;
			else
				throw std::runtime_error("nullptr");
		}
		non0_ptr &operator= (non0_ptr &&rhs)
		{
			if(&rhs != nullptr && this != &rhs)
			{
				pointer = rhs.pointer;
			}
			else
				throw;
			return *this;
		}

		non0_ptr (const non0_ptr &) = delete;
		non0_ptr &operator= (const non0_ptr &) = delete;

		~non0_ptr ()
		{
			delete pointer;
		}

		void swap (cpplab::non0_ptr<T> &rhs)
		{
			std::swap (pointer, rhs.pointer);
		}

		constexpr T *get () const
		{
			return pointer;
		}
		bool operator== (std::nullopt_t) const
		{
			return pointer == nullptr;
		}
		bool operator!= (std::nullopt_t) const
		{
			return pointer != nullptr;
		}
		non0_ptr operator* () const
		{
			return *pointer;
		}
		non0_ptr operator->() const
		{
			return pointer;
		}
	};

} // namespace cpplab

int main ()
{
	int data = 2;
	int d = 3;
	cpplab::unique_ptr<int> u1 (data);
	cpplab::unique_ptr<int> u2 (d);
	// Two unique Ptrs
	std::cout << "defualt\n";
	std::cout << "u1 = " << u1.get () << "\n";
	std::cout << "u2 = " << u2.get () << "\n\n";
	// Swap pointers
	u1.swap (u2);
	std::cout << "swap\n";
	std::cout << "u1 = " << u1.get () << "\n";
	std::cout << "u2 = " << u2.get () << "\n\n";
	// reset u1 ptr
	u1.reset ();
	std::cout << "reset u1 ptr= " << u1.get () << "\n\n";
	// reset u2 ptr with new ptr
	u2.reset (new int (20));
	std::cout << "reset with new argumetnt u2 = " << u2.get () << "\n";
	std::cout << "*u2 = " << *u2.get () << "\n\n";
	// release u2
	u2.release ();
	std::cout << "release u2 = " << u2.get () << "\n\n";

	int obraz = 1;
	cpplab::non0_ptr<int> zero(obraz);
	std::cout << "release zero = " << zero.get () << "\n\n";

	cpplab::unique_ptr<int> zero1(nullptr);
	std::cout << "release zero1 = " << zero1.get () << "\n\n";

	cpplab::non0_ptr<int> zero2(nullptr);
	std::cout << "release zero2 = " << zero2.get () << "\n\n";

	return 0;
}
