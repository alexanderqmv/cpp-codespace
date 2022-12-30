#include <iostream>
#include <string>
#include <assert.h>
#include <algorithm>
#include <stdexcept>



namespace str
{
	class string
	{
	public:
		string()
		{
			_str__ = new char[1];
			_str__[0] = '\0';
			_length__ = 0;
		}

		string(const char* str)
		{
			_length__ = stringlen(str);
			_str__ = new char[_length__ + 1];
			strcopy(_str__, str);
		}

		string(const string& this_str)
		{
			_length__ = this_str._length__;
			_str__ = new char[_length__ + 1];
			strcopy(_str__, this_str._str__);
		}

		~string()
		{
			delete[] _str__;
		}

		std::size_t size() const { return _length__;  }

		std::size_t stringlen(const char* strr) const
		{
			std::size_t len = 0;

			while (strr[len] != '\0')
			{
				++len;
			}

			return len;
		}

		char* strcopy(char* dest, const char* src)
		{
			static int i;

			for (int i = 0; src[i] != '\0'; ++i)
			{
				dest[i] = src[i];
			}
			dest[i] = '\0';

			return dest;
		}

	private:
		char* _str__;
		std::size_t _length__;
	};
}





int main()
{
	
	str::string str("Hello,World!");
	str::string str2(str);
	
	std::cout << str.size();


	return 0;
}
