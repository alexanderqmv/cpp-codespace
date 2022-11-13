
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
 
using namespace std;

template<typename PTR>
class smart_ptr
{
	private:

		/////////////////////////////////////////////////////
		///		 The template pointer points to an        ///
		///		 argument in the class constructor        ///
		/////////////////////////////////////////////////////
		PTR* ptr;
	public:

		/////////////////////////////////////////////////////
		///		  The class constructor has an 			  ///
		///		  argument to the template pointer        ///
		/////////////////////////////////////////////////////

		smart_ptr(PTR* ptr)
		{
			this->ptr = ptr;
			////////////////
			//TEMPLATE PTR//
			////////////////
		}

		////////////////////////////////////////////////////////
		///	the class destructor does not contain arguments. ///
		/// the pointer is deleted in it and to clear the 	 ///
		/// memory, we assign null ptr to it so that it      ///
		///         does not contain garbage.		         ///
		////////////////////////////////////////////////////////
		
		~smart_ptr()
		{
			delete ptr;
						   //////////////////////////////////////////////////////////
			ptr = nullptr; ///AVAILABLE: NULL, but nullptr is special for pointers///
						   //////////////////////////////////////////////////////////
			cout << "*** DYNAMIC MEMORY FREE SUCCESSFULLY ***";
			
		
		}                  
		PTR& operator*()
		{
			return *ptr;
		}
	
};


int main()
{
	smart_ptr<int> ptr = new int(10);

	cout << *ptr;
	return 0;
}
