#include <iostream>

using namespace std;

class Student
{
    string name;
    int age;

public:
    Student()
    {
        cout << "Constructor Called: " << this << endl << endl;
    }
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl; 
    }

    void operator delete(void *p)
    {
        cout << "\033[31m[DELETE]\033[32m - Successfully!\033[0m" << endl << endl;
        free(p);
    }
}; 

int main()
{
    Student * p = new Student("Alex", 15);
    p->display();
    delete p;
    
    return 0;
}
