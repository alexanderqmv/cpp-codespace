#pragma once

#ifndef LIB_H
#define LIB_H
 

namespace lib 
{
	template<class T>
	class vector
	{
		T*        _data;
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

		T& operator[](T index)		   { return _data[index]; }
		size_t size()				   { return _size; }
		size_t capacity()			   { return _capacity; }
		bool empty() { if (_size != 0) { return false; }/* else-> */ return true; }
	
		/*LEFT TO DO*/
		// push_back()
		// push_fron()
	};
}
namespace lib
{
	struct node
	{
		int data;
		node* left;
		node* right;
	};
	node* createNode(int Data)
	{
		node* newNode 	 =	new node;
		newNode->data    =	Data;
		newNode->left    =  nullptr;
		newNode->right   =  nullptr;
		return newNode;
	}

	void nodefree(node* _node)
	{
		if (_node == nullptr) return;
		nodefree(_node->left);
		nodefree(_node->right);
		delete _node;
	}

	void display(node* _node, int level = 0)
	{
		if (_node == nullptr) return;
		display(_node->left, level + 1);
		for (int i = 0; i < level; ++i) std::cout << "   ";
		std::cout << _node->data << std::endl;
		display(_node->right, level + 1);
	}
}

namespace lib
{
	template<typename _First, typename _Second>
	class pair
	{
	public:
		using first_type = _First;
		using second_type = _Second;
		
		first_type   first;
		second_type  second;
		pair() = default;

		pair(const first_type& _f, const second_type& _s)
			: first(_f), second(_s) {}
		pair(const pair& other) : first(other.first), second(other.second) {}
		pair(pair&& other) : first(std::move(other.first)), second(std::move(other.second)) {}
		pair& operator=(const pair& other)
		{
			first = other.first;
			second = other.second;

			return *this;
		}
	
		 
		friend std::ostream& operator<<(std::ostream& os, const pair& pr)
		{
			os << pr.first << " " << pr.second << std::endl;
		}
	};
	 

}


namespace lib
{
	template<typename T>
	class smart_ptr
	{
		T* ptr;
		size_t sz = 0;
		bool is_Array = false;
	public:

		smart_ptr() : ptr(nullptr) {}

		explicit smart_ptr(T* _ptr) : ptr(_ptr), is_Array(false) {}

		smart_ptr(T* _ptr, size_t _sz) : ptr(_ptr), sz(_sz), is_Array(true) {}

		~smart_ptr()
		{
			if (is_Array == true)		{ delete[] ptr; }
			else if (is_Array == false) { delete ptr; }
		}

		T& operator*()         { return *ptr; }
		T* operator->()		   { return ptr; }
		T& operator[](T index) { return ptr[index]; }

		 
	};
}


#endif // LIB_H
