/**
 * AUTHOR: @ynwqmv 
 * C++ STANDARD: 11
 * LICENSE: GNU GENERAL PUBLIC LICENSE
 * 
 * GITHUB: https://github.com/ynwqmv/
 * INSTAGRAM: https://instagram.com/ynwqmv/
 * 
 * IDE: VISUAL STUDIO CODE 2022
 * 
 * (C) YNWQMV 2022
 * 
 * ~ FOR MORE INFORMATION, CONTACT 
 * ~ DEVELOPER BY THIS MAIL ADDRESS:
 *       <lexpycode0@gmail.com>
 * 
*/


/*
DECLARED HERE:
	SMART POINTERS && SORTING ALGORITHM

USAGE:
	#include "xlib.cpp" && use methods((print_t, sort_t, smart_ptr))
	
	#1 (PRINT_T):
		Prints the elements of array.
		Takes two arguments, first - array, second - size of array.
		TECH.DOC ~ https://github.com/ynwqmv/alterego
	#2 (SORT_T):
		Sorts the array.
		Takes two arguments, first - array, second - size of array.
		TECH.DOC ~ https://github.com/ynwqmv/alterego
	#3 (SMART_PTR):
		Creates pointers* (dynamic allocated memory use - ::heap::)
		Advantages:
			Deletes the pointer automatically (Destructor)
		Takes one type argument:
				smart_ptr<type> ptr1;
								||
				smart_ptr<int> ptr1 = new int(999);
		TECH.DOC ~ https://github.com/ynwqmv/alterego
		
					
*/

#include <array>
#include <cstdio>
#include <iostream>
#include <iterator>

using namespace std;

template<typename T>
class sort_t {

	////////////////////////////////////
	///              #1              ///
	/// the private variable ::temp  ///
	/// is needed to assign          ///
	/// the primary value from &first///
	/// (for swap values)            ///
	///                              ///
	////////////////////////////////////
	

	private:
		int temp, pass = 0; 

	public:
		
		inline void swap_t(T & first, T & second)
		{

			T temp(first);
			first = second;
			second = temp;
		}

		///////////////////////////////////////////////////////////////////////
		///                   *** SORTING ALGORITHM ***                     ///
		///////////////////////////////////////////////////////////////////////
		/*						     BUBBLE SORT     */
		///////////////////////////////////////////////////////////////////////
		/// By means of a nested loop (a loop within a loop), we iterate    ///
		/// through all the elements and compare, if one number is greater  ///
		/// than the second, then they are swapped. An unsigned integer     ///
		///             `size_t` is used as a variable                      ///
		///////////////////////////////////////////////////////////////////////

		inline void b_sort_t(T *arr, size_t arrSize)
		{
			for (size_t i = 0; i < arrSize; ++i)
			{
				for (size_t j = i + 1; j < arrSize; ++j)
				{
					if (arr[i] > arr[j])
					{
						swap_t(arr[i], arr[j]);
					}
				}
			}
		}


		/////////////////////////////////////////////////
		///           	CLASS CONSTRUCTOR             ///
		/////////////////////////////////////////////////
		/////////////////////////////////////////////////
		///As an argument for the constructor, we pass///
		///    a pointer to the array and its size    ///
		/////////////////////////////////////////////////
		
		sort_t(T* arr, size_t arrSize)
		{
			b_sort_t(arr,arrSize);
		}

};

 
template<typename PTR>
class smart_ptr
{
	public:

		// CONSTRUCTOR
		smart_ptr(PTR* ptr)
		{
			this->ptr = ptr;
		}

		// DESTRUCTOR : CLEAR MEMORY
		~smart_ptr()
		{
			delete ptr; // R

			ptr = nullptr; // 0X00
		}


		// OVERLOAD OPERATOR* RETURNS POINTER OF PTR
		PTR& operator*()
		{
			return *ptr;
		}


		private:
			PTR* ptr;
};


//////////////////////////////////////////
///           METHOD:~PRINT_T          ///
///	 Prints the elements of array  ///
///          Two arguments taken       ///
//////////////////////////////////////////
template<typename T>
void print_t(T *arr, size_t arrSize)
{
	for (size_t i = 0; i < arrSize; ++i)
	{
		cout << arr[ i ] << " ";
	}

}

