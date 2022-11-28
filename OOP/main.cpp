/**
 * Object-Oriented Programming :: Car
 * 
 * (C) ynwqmv :: 2022-2023
*/

#include <iostream>

using namespace std;

class Car
{
    private:
        int price;
        int year;
        
        string mark;
        

       
    public:
        string driver_name;
        int mileage;
        Car()
        {
            cout << "Default constructor address::"
                 << (this) << endl;
        }

        Car(int price, int year, int mileage, string mark)
        {
            this->price = price;
            this->year = year;
            this->mileage = mileage;
            this->mark = mark;

        }

        void print()
        {
            cout << "\nPrice :: "<< price << endl << "Year:: " << year << endl << "Mileage:: " << mileage << endl << "Mark:: "<<  mark;
        }

        Car& operator++(int)
        {
            this->mileage++;
            return *this;
        }
        
        Car& operator--(int)
        {
            this->mileage--;
            return *this;
        }
        /*Num(int iNumber = 0) : m_iNumber(iNumber) {}*/
        /*
            Num operator+=(const Num& rhs)
            {
                this->m_iNumber = (this->m_iNumber + rhs.m_iNumber);
                return *this;
            }
        
        */

        ~Car(){}
    
        
};

int main()
{
    
    Car(38200,2022,9700,"Mercedes").print();
    
    cout << endl;
    Car a(0,0,0, "\0");

    Car carr;

    /* gives access to all members of 
    class with all access-modifiers */

    Car *ptr = &carr; 
    
    cout << "\nMiliage:: " << ptr->mileage << endl;

    if (ptr->mileage == 9700)
    {
        ptr->mileage++;
        ptr->mileage++;
        cout << "\nMileage increment:: " << ptr->mileage << endl;
    }

    ptr->mileage--;
    cout << "\nDecrement of mileage:: " << (ptr->mileage) << endl;
     

    ptr->driver_name = "Tom";
    cout << "Driver Name:: " <<ptr->driver_name << endl;

    return 0;
}
