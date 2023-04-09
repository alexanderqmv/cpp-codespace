#include <iostream>
#include <string>

#include <vector>
#include <list>

#include <algorithm>



#pragma warning(disable:4996)


class except
{
public:
	explicit except(std::string message) : msg(message), err_code(1) { }
	explicit except(int code) : err_code(code) { }
	virtual int code() const noexcept { return err_code; }
	virtual std::string what() const noexcept { return msg; }
private:
	std::string msg;
	int err_code;
};


using __XSTR_EXCEPT = except;
using __XVEC_EXCEPT = except;


namespace x
{

	class string
	{
	public:
		string()
		{
			str_ = new char[1];
			str_[0] = '\0';
			size_ = 0;

			capacity_ = 0;
		}

		string(const char* str)
		{
			size_ = std::strlen(str);
			capacity_ = std::strlen(str);
			str_ = new char[size_ + 1];
			std::strcpy(str_, str);
		}
		
		~string() { delete[] str_; }

		string(const string& other) noexcept
		{
			// can i add here check : if (this != &other)
			size_ = other.size_;
			capacity_ = other.capacity_;
			str_ = new char[size_ + 1];
			std::strcpy(str_, other.str_);
		}

		std::size_t size() const noexcept { return size_; }

		/* the functions have not been fully tested since the project
		   is under development. in connection with the discovery of errors
		   in the code, please let us know by mail qmvscorpio@gmail.com */


		friend std::ostream& operator<<(std::ostream& os, const string& str)
		{
			os << str.str_;
			return os;
		}


		friend std::istream& operator>>(std::istream& is, string& str)
		{
			std::vector<char> buffer; // creating container of chars
			char ch = is.get(); // cin input chars
			while (ch != '\n' && ch != '\r' && !is.eof()) // condition in while loop
			{
				buffer.emplace_back(ch); // if condition is true, than we push chars into buf
				ch = is.get();
			}
			buffer.emplace_back('\0'); // set the last character as null-terminate symbol
			str = &buffer[0]; // assigning the address of the first

			return is;
		}



		auto& operator[](std::size_t index)
		{

			if (index > strlen(str_))
			{
				throw __XSTR_EXCEPT
				("Index out of bounds");
			}
			return str_[index];
		}


		char* c_str() const { return str_; }
		void clear() noexcept
		{
			delete[] str_; // -> deallocate current array of characters;

			str_ = new char[1]; // allocate new memory with size 1 to put null-terminated symbol
			str_[0] = '\0'; // 
			size_ = 0; // 
		}

		char& at(std::size_t pos) const
		{
			if (pos < size())
				return str_[pos];
			else
				throw __XSTR_EXCEPT("Index out of range");

		}
		bool operator>(const string& other)
		{
			if (this->str_ > other.str_)
				return true;
			else
				return false;
		}

		bool operator<(const string& other)
		{
			if (this->str_ < other.str_)
				return true;
			else
				return false;
		}
		bool empty() const noexcept { return size_ == 0; }
		std::size_t capacity() const noexcept { return capacity_; }
		auto& erase(std::size_t position, std::size_t n_of_chars)
		{

			// world -> pos(0), n_of_chars(1) -> (new string) orld
			if (this->empty() || position > this->size() || n_of_chars > this->size() || n_of_chars > this->size() - position)
			{
				return *this;
			}
			const std::size_t new_str_size = this->size() - n_of_chars + 1;
			char* new_str = new char[new_str_size];
			std::size_t j = 0;
			for (std::size_t i = 0; i < this->size(); ++i) {
				if (i < position || i >= position + n_of_chars)
				{
					new_str[j++] = str_[i];
				}
			}

			new_str[j] = '\0';
			delete str_;
			str_ = new_str;
			size_ = new_str_size;
			capacity_ = size_;
			return *this;

		}
		string& operator=(const char* other)
		{

			if (str_ != nullptr)
			{
				delete[] str_;
			}
			size_ = std::strlen(other);
			capacity_ = std::strlen(other);
			str_ = new char[capacity_ + 1];
			std::strcpy(str_, other);
			return *this;
		}
		string& operator=(const string& other)
		{
			if (this == &other)
			{
				return *this;
			}

			if (other.str_ != nullptr)
			{
				delete[] str_;
				size_ = std::strlen(other.str_);

				capacity_ = std::strlen(other.str_);
				str_ = new char[size_ + 1];
				std::memcpy(str_, other.str_, size_ + 1);
			}
			else
			{
				delete[] str_;
				str_ = nullptr;
				size_ = 0;
				capacity_ = 0;
			}
			return *this;
		}


		string& operator+=(const string& other)
		{
			const size_t old_size = size_;
			size_ += other.size_;
			if (capacity_ < size_)
			{
				capacity_ = size_;
				char* new_str = new char[size_ + 1];
				std::strcpy(new_str, str_);
				delete[] str_;
				str_ = new_str;
			}
			std::strcat(str_ + old_size, other.str_);
			return *this; 
		}





		void stdreverse() { std::reverse(str_, str_ + size_); }

		/* *.stdreverse() - reverse method that uses the std approach (more efficient)
		   *.xreverse()   - reverse method that uses xstring approach (efficient)   */

		void xreverse()
		{
			if (size_ < 1) return;
			if (str_ != nullptr)
			{
				int left = 0;

				int right = size_ - 1;
				while (left < right)
				{
					chrswp(str_[left], str_[right]); //swap
					++left;
					--right;
				}
			}

		}
		/* *.chrswp(parameter ..1, parameter ..2) - additionally method
					 that not implemented in original string         */
		void chrswp(char& a, char& b)
		{
			char tmp = a;
			a = b;
			b = tmp;
		}


	private:

		char* str_;
		std::size_t size_;
		std::size_t capacity_;

	};
}


namespace x
{
	/* Here is unfixed problem with capacity, while using push_back.
	   Size is raises, but capacity not yet.Soon we will fix it too. */
	namespace beta__do_not_use {
		template<class T>
		class vector
		{
			T* _data;
			size_t    _size;
			size_t    _capacity;
		public:

			vector()
				: _data(nullptr), _size(0), _capacity(0)
			{
				std::cout << "vector: \n";
				std::cout << "\naddr:: " << _data << "\nsize: "
					<< _size << "\ncapacity: " << _capacity;

			}

			vector(size_t size)
				: _size(size), _data(new T[size]), _capacity(size)
			{
				for (int i = 0; i < _size; ++i)
				{
					_data[i] = 0;
				}
			}

			~vector() { delete[] _data; _data = nullptr; }

			// Copy-Constructor
			vector(const vector& other)
				: _data(new int[other._size]), _size(other._size), _capacity(other._size)
			{
				std::copy(other._data, other._data + _size, _data);
			}
			// Move-Constructor
			vector(vector&& other) noexcept
				: _data(other._data), _size(other._size), _capacity(other._capacity)
			{
				other._data = nullptr;		// 0x0000000000
				other._size = NULL;			// 0
				other._capacity = NULL;		// 0
			}

			void reserve(size_t n)
			{
				if (_capacity < n)
				{
					int* newData = new int[n];
					copy(_data, _data + _size, newData);
					_capacity = n;
					swap(_data, newData);

					delete[] newData;
					newData = nullptr;
				}
			}


			void resize(size_t _n) { if (_n > _capacity) { reserve(_n); } _size = _n; }

			void pop_back() { if (_size > 0) { --_size; } }
			void push_back(T elem)
			{
				T* new_array = new T[_size + 1];
				for (int i = 0; i < _size; ++i) {
					new_array[i] = _data[i];
				}
				new_array[_size] = elem;
				delete[] _data;
				_data = new_array;
				++_size; // increment size after allocating new memory
			}
			vector& operator=(const vector& other)
			{
				if (this != &other)
				{
					delete[] _data;
					_data = new int[other._size];
					_size = other._size;
					_capacity = other._size;
					copy(other._data, other._data + _size, _data);
				}

				return *this;
			}

			vector& operator=(vector&& other) noexcept
			{
				if (this != &other)
				{
					delete[] _data;
					_data = other._data;
					_size = other._size;
					_capacity = other._capacity;
					other._data = nullptr;
					other._size = NULL;
					other._capacity = NULL;
				}

				return *this;
			}

			T& operator[](T index) { return _data[index]; }
			size_t size() { return _size; }
			size_t capacity() { return _capacity; }
			bool empty() { if (_size != 0) { return false; }/* else-> */ return true; }

			/*LEFT TO DO*/
			// push_back()
			// push_fron()
		};
	}
}



namespace x
{
	namespace algo
	{
		class SAlgorithms
		{
		public:
			static bool is_palindrome(const std::string& str__)
			{
				if (str__.empty()) return false;
				int left = 0;
				int right = str__.size() - 1;
				bool _is_palindrome = true;
				while (left < right)
				{
					if (str__[left] != str__[right])
						_is_palindrome = false;

					++left;
					--right;
				}
				return _is_palindrome;
			}
			template<typename _Ty>
			static void bubble_sort(_Ty arr[], int size) noexcept
			{
				if (size <= 0) return;
				// loop 1
				 
				for (int i = 0; i < size; ++i)
				{
					for (int j = i + 1; j < size; ++j)
					{
						if (arr[i] > arr[j])
						{
							int temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
			 
			}
			template<typename _Ty>
			static void increment(_Ty arr[], int size)
			{
				if (size <= 0) return;
				for (int i = 0; i < size; ++i)
				{
					arr[i] += 1;
				}
			}
			template<typename _Ty>
			static void decrement(_Ty arr[], int size)
			{
				if (size <= 0) return;
				for (int i = 0; i < size; ++i)
				{
					arr[i] -= 1;
				}
			}
		};
		using static_algo = SAlgorithms;
	}
}
 
 
