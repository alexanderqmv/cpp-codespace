#include <iostream>
#include <string>

#include <vector>
#include <list>

#include <cassert>
#include <algorithm>
#include <cassert>
 
// disable compiler warnings (strcpy_s)
#pragma warning(disable:4996)


class except
{
public:
	except(std::string message) : msg(message) { }

	virtual std::string what() const noexcept { return msg; }
private:
	std::string msg;};


typedef except __OWNSTR_EXCEPT;


 

namespace spd
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
		
		string(const char*	 str)
		{
			size_ = std::strlen(str);
			capacity_ = std::strlen(str);
			str_ = new char[size_ + 1];
			std::strcpy(str_, str);
		}
		~string() { if (str_ != nullptr){
         delete[] str_; 
       } }
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
		auto& operator[](std::size_t index)
		{
			if (index > strlen(str_))
			{
				throw std::runtime_error
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
				throw std::out_of_range("Index out of range");
			
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
		 
	private:
		char* str_;
		std::size_t size_;
		std::size_t capacity_;

	};
	// operator+
	// operator! = 
	// operator==
	// operator< <= > >=
	// substr()
	// find() 
	// replace()
	// insert()
	// erase()
	// c_str()
	// clear() 
	// resize()
	// capacity()
	// reserve()
	// empty()

}

/*
	.* best practises:

	When you return a value as an rvalue, it means that the value is returned
	as a temporary object, and it cannot be modified. This is useful when you
		want to avoid unnecessary copies and improve performance.

	
	On the other hand, when you return a value as an lvalue, it means that the value 
	is returned as a reference, and it can be modified. This is useful when you want 
	to modify the value or when you want to return a reference to an existing object.

*/
