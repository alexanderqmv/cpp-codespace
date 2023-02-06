#ifndef HEADER_H
#define HEADER_H

namespace lib
{
	template<typename _Ty1, typename _Ty2>
	struct pair
	{
		pair() = default;
		~pair() = default;

		pair(_Ty1 _first, _Ty2 _second)
			: first(_first), second(_second) { }

		_Ty1 first;
		_Ty2 second;

		pair& operator=(const pair& other)
		{
			first = other.first;
				second = other.second;
					return *this;
		}

		pair operator+(const pair& other) const
		{
			/*
					 :	  operator+
				 NOT APPEAR IN ORIGINAL `CLASS PAIR`
			*/
			return pair(first + other.first, second + other.second);
		}

		void swap(pair& other) noexcept
		{
			pair temp;
			
			temp.first = first;
			temp.second = second;

				first = other.first;
				second = other.second;

					other.first = temp.first;
					other.second = temp.second;
		}
	};


template<typename _Ptr>
	class basic_ptr
	{
	public:
		basic_ptr() { ptr = nullptr; }
		explicit basic_ptr(_Ptr* _pointer, size_t _size)
			: ptr(_pointer), size(_size), isArray(true) { }

		explicit basic_ptr(_Ptr* _pointer)
			: ptr(_pointer), size((int)NULL), isArray(false) { }
		
		basic_ptr(basic_ptr& _Typtr) = delete;
		 

		~basic_ptr()
		{
			if (isArray == true)
			{
				delete[] ptr;
					ptr = nullptr;
			}
						delete ptr;
				ptr = nullptr;
		}

		_Ptr& operator*() { return *ptr; }

	private:
		_Ptr* ptr;
		size_t size{ 0 };
		bool isArray{ false };

	};


	template<typename _tValue>
		void sort(std::vector<_tValue>& _array, int start, int end)
		{
				if (start < end)
				{
					int left = start;
					int right = end;
					int mid = (left + right) / 2;
					do
					{
						while (_array[left]  < _array[mid]) { ++left; }
						while (_array[right] > _array[mid]) { --right; }

						if (start <= end)
						{
							std::swap(_array[left], _array[right]);
								++left;
								--right;
						}


					} while (left < end);
					sort(_array, start, right);
					sort(_array, left, end);
				}
		}

		
		template<typename _FwdIt>
			constexpr _FwdIt min_element(_FwdIt _first, _FwdIt _second) noexcept
			{
				return min_element(_first, _second, less<>());
			}

		template<typename _FwdIt>
			constexpr _FwdIt max_element(_FwdIt _first, _FwdIt _second) noexcept
			{
				return max_element(_first, _second, greater<>());
			}
				 
		template<typename _BscT>
			constexpr _BscT min(_BscT _firstEl, _BscT _secondEl) noexcept
			{
				return (_firstEl < _secondEl) ? _firstEl : _secondEl;
			}

		template<typename _BscT>
			constexpr _BscT max(_BscT _firstEl, _BscT _secondEl) noexcept
			{
				return (_firstEl > _secondEl) ? _firstEl : _secondEl;
			}


		template<typename T> 
			constexpr std::pair<const T&, const T&> minmax (const T& _elem1, const T& _elem2) noexcept
			{ 
				return (_elem1 < _elem2) ? std::make_pair(_elem1, _elem2) : std::make_pair(_elem2, _elem1);
			}

		 template<typename _FwdIt>
			bool is_sorted(_FwdIt _first, _FwdIt _last) 
			{  
				if (_first == _last) return true; // if 1 element
				_FwdIt next = _first; // begin()
				while (++next != _last)
				{
					if (*next < *_first)
						return false;
					
					++_first;
				}
				return true;
			}
			
		 

		template<typename _FwdIt, typename T>
			bool binary_search(_FwdIt beginIt, _FwdIt endIt, const T& value)
			{
				beginIt = std::lower_bound(beginIt, endIt, value);
				return (beginIt != endIt && !(value < *beginIt));
				 
			}

		template<typename _FwdIt, typename T>
			T accumulate(_FwdIt firstIt, _FwdIt lastIt, const T& val) 
			{
				if (firstIt == lastIt) return val;

				T sum = val;
					for (; firstIt != lastIt; ++firstIt)
					{
						sum += *firstIt;
					}

				return sum;

			}
			
		 

}




#endif
