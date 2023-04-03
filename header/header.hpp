	#include <iostream>
	#include <string>

	#include <vector>
	#include <list>
 
	#include <algorithm>
 
 

	#pragma warning(disable:4996)


	class except
	{
	public:
		except(std::string message) : msg(message) { }

		virtual std::string what() const noexcept { return msg; }
	private:
		std::string msg;};


	typedef except __XSTR_EXCEPT;


 

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
		
			string(const char*	 str)
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
		 
		
		 

			string operator+(const string& other) const
			{
				string result;
				result.size_ = size_ + other.size_;
				result.capacity_ = result.size_;
				result.str_ = new char[result.size_ + 1];
				std::strcpy(result.str_, str_);
				std::strcat(result.str_, other.str_);
				return result;
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
