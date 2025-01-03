#include <iostream>
#include <optional>
#include <type_traits>
#include <utility>

namespace cpplab
{
	template <typename T> class unique_ptr
	{
	  private:
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

template<typename T>
concept notNullPtr = std::is_pointer_v<T> && !std::is_same_v<T, std::nullptr_t>;

template <notNullPtr T>
class non0_ptr {
private:
    T pointer;

public:
    // Konstruktor z wskaźnikiem, wymaga nie-null
    explicit non0_ptr(T ptr) : pointer(ptr) {
        if (!ptr)
            throw std::invalid_argument("non0_ptr cannot be initialized with nullptr");
    }

    // Konstruktor przenoszący
    non0_ptr(non0_ptr&& rhs) noexcept : pointer(std::exchange(rhs.pointer, nullptr)) {}

    // Operator przypisania przenoszącego
    non0_ptr& operator=(non0_ptr&& rhs) noexcept {
        if (this != &rhs) {
            reset(nullptr);
            pointer = std::exchange(rhs.pointer, nullptr);
        }
        return *this;
    }

    // Usunięcie kopiowania
    non0_ptr(const non0_ptr&) = delete;
    non0_ptr& operator=(const non0_ptr&) = delete;

    // Destruktor
    ~non0_ptr() { reset(nullptr); }

    // Reset wymusza nie-null
    void reset(T newElement) {
        if (!newElement)
            throw std::invalid_argument("non0_ptr cannot reset to nullptr");
        pointer = newElement;
    }

    // Dostęp do wskaźnika
    T get() const noexcept { return pointer; }
    T& operator*() const { return *pointer; }
    T operator->() const noexcept { return pointer; }
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

    int* nonNullData = new int(42);
    // cpplab::non0_ptr<int*> n1(nonNullData);
	return 0;
}
