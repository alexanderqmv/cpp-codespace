#include <iostream>

using namespace std;

union Uni
{
    int* a;
    int* b;
    
    ~Uni()
    {
        
        delete a,b;
        cout << "\n\033[32mMemory free success\033[0m\n";
        
    }
};

struct STUDENT
{
    public:
        unsigned short age;
        const char* name;
        unsigned short average_marks;
        const string lovely_subjects;
};

void student_1(STUDENT &student)
{
    student.name = "Alex";
    cout << student.name;

}

int main()
{
    STUDENT s;
    student_1(s);
    cout << endl;
    
    Uni u;
    u.a = new int(10);

    cout << u.a << " - union address" << endl << &u.a << " - pointer address" << endl << *u.a<< endl;
    cout << endl;
    u.b = &*u.a;
    
    cout << u.b  << " - union address" << endl << &u.b << " - pointer address"<< endl << *u.b <<endl;
    return 0;
}
