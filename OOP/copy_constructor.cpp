#include <iostream>

using namespace std;

class MyClass
{
    private:
        int *data;
    public:


        MyClass(int size)
        {
            this->size = size;

            this->data = new int[size];

            for (int i = 0; i < size; ++i)
            {
                data[i] = i;
            }

            cout << "Вызвался конструктор " << this << endl;
        }

        MyClass(const MyClass &other)
        {
            this->size = size;
            this->data = new int[other.size];
            cout << "Вызвался конструктор копирования:  " << this << endl;

            for (int i = 0; i < other.size; ++i)
            {
                this->data[i] = other.data[i];
            }
        }

        ~MyClass()
        {

            cout << "Вызвался деструктор " << this << endl;
            delete[] data;
        }
    private:
        int size;
};

void foo(MyClass value)
{
    cout << "Вызвалась функция foo()  "   << endl;
}

MyClass foo2()
{
    cout << "Вызвалась функция foo2()  "   << endl;
    MyClass temp(2);

    return temp;
}
int main()
{
    //foo2();

    MyClass a(1);
    MyClass b(a);
    //MyClass my(0);

    //foo(5);

    return 0;
}
