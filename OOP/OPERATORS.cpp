#include <iostream>

using namespace std;

class Defi
{
    public:
        Defi() = default;

        Defi(int thisX, int thisY)
        {
            this->x = thisX;
            this->y = thisY;
        }

        void display()
        {
            cout << this->x << endl;
            cout << this->y << endl;
        }

        bool operator==(const Defi & other)
        {
            return this->x == other.x and this->y == other.y;
        }

        bool operator!=(const Defi & other)
        {
            return !(this->x == other.x and this->y == other.y);
        }

        bool operator >(const Defi & other)
        {
            return this->x > other.x && this->y > other.y;
        }
        
        bool operator<(const Defi & other)
        {
            return this->x < other.x && this->y < other.y;
        }

        Defi operator+(const Defi & other)
        {
            Defi temp;
            temp.x = this->x + other.x;
            temp.y = this->y + other.y;
            return temp;
        }

        Defi operator-(const Defi & other)
        {
            Defi temp;
            temp.x = this->x - other.x;
            temp.y = this->y - other.y;
            return temp;
        }

        void* operator new(size_t size)
        {
            void *p = ::operator new(size);
            return p;
        }

        void operator delete(void *p)
        {
            free(p);
        }

        Defi& operator++()
        {
            x++;
            y++;
            return *this;
        }

        Defi& operator--()
        {
            x--;
            y--;
            return *this;
        }

    private:
        int x;
        int y;
};

int main()
{
    Defi defi(10,10);
    defi.display();

    Defi d(10,10);
    
    bool b1 = d == defi;
    bool b2 = d != defi;

     
    Defi a(10,10);
    
    Defi b(10,20);
    Defi c = a + b; // 20, 30
    cout << endl;
    c = a - b; // 0, -10
    
    ++b;
    b.display();
     
    
    Defi * dd = new Defi(20,20);
    delete dd;
    
    dd = nullptr;
    static int de_12{}; // 32767
    
    
    cout << endl;
    cout << sizeof(Defi) << " - sizeof Defi"<< endl;

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    

    return 0;
}
