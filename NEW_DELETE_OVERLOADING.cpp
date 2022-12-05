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

        void* operator new(size_t size)
        {
            cout << "\n\nOperator new: \n\n";
            // void *p -> Student * p 
            // ::operator new(size) -> new Student("Yash",24);
            void *p = ::operator new(size);
            return p;
        }
        

        void operator delete(void *p)
        {
            cout << "\033[31m[PROCESS] Deleting ...\033[0m" << endl;
            free(p);
            cout << "\033[32m[PROCESS] Done.\033[0m" << endl;
        }
        
    }; 

int main()
{
    Student * p = new Student("Alex", 15);
    p->display();
    delete p;

    cout << endl;

    Student * a = new Student("David", 14);
    a->display();
    delete a;

    Student * c  = new Student("Saint-Petersburg", 3159);
    c->display();
    
    return 0;
}
