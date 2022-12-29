#include <iostream>
#include <cstring>

class String {
public:
	// Constructors
	String();
	String(const char*);
	String(const String&);

	// Destructor
	~String();

	// Accessors
	int length() const;
	char get(int) const;

	// Mutators
	void set(int, char);
	void append(char);

	// Overloaded operators
	String operator+(const String&) const;
	bool operator==(const String&) const;
	bool operator<(const String&) const;
	char& operator[](int);
	const char& operator[](int) const;
	String& operator=(const String&);

private:
	// Private member variables and functions go here
	char* data_;
	int length_;
};
 

// Constructors

String::String() {
	data_ = new char[1];
	data_[0] = '\0';
	length_ = 0;
}

String::String(const char* s) {
	length_ = std::strlen(s);
	data_ = new char[length_ + 1];
	std::strcpy(data_, s);
}

String::String(const String& s) {
	length_ = s.length_;
	data_ = new char[length_ + 1];
	std::strcpy(data_, s.data_);
}

// Destructor

String::~String() {
	delete[] data_;
}

// Accessors

int String::length() const {
	return length_;
}

char String::get(int index) const {
	if (index < 0 || index >= length_) {
		std::cerr << "Error: index out of range\n";
		exit(1);
	}
	return data_[index];
}

// Mutators

void String::set(int index, char c) {
	if (index < 0 || index >= length_) {
		std::cerr << "Error: index out of range\n";
		exit(1);
	}
	data_[index] = c;
}

void String::append(char c) {
	char* temp = new char[length_ + 2];
	std::strcpy(temp, data_);
	temp[length_] = c;
	temp[length_ + 1] = '\0';
	delete[] data_;
	data_ = temp;
	++length_;
}

// Overloaded operators

String String::operator+(const String& s) const {
	String result;
	result.length_ = length_ + s.length_;
	result.data_ = new char[result.length_ + 1];
	std::strcpy(result.data_, data_);
	std::strcat(result.data_, s.data_);
	return result;
}

bool String::operator==(const String& s) const {
	return std::strcmp(data_, s.data_) == 0;
}

bool String::operator<(const String& s) const {
	return std::strcmp(data_, s.data_) < 0;
}

char& String::operator[](int index) {
	if (index < 0 || index >= length_) {
		std::cerr << "Error: index out of range\n";
		exit(1);
	}
	return data_[index];
}

const char& String::operator[](int index) const {
	if (index < 0 || index >= length_) {
		std::cerr << "Error: index out of range\n";
		exit(1);
	}
	return data_[index];
}

String& String::operator=(const String& s) {
	if (this != &s) {
		delete[] data_;
		length_ = s.length_;
		data_ = new char[length_ + 1];
		std::strcpy(data_, s.data_);
	}
	return *this;
}

int main()
{
	String s("Hello,World!");
	std::cout << s.length();
	
	return 0;
}
