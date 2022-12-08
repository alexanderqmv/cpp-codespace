#include <cstring>
#include <iostream>

using namespace std;

class Phone
{   
    public:

        Phone() = default;

        Phone(int num, string mod, int wei)
            : number(num),
              model(mod),
              weight(wei) { }

        Phone(int num, string mod)
            : number(num),
              model(mod) { }
            

        ~Phone() = default;

        void receiveCall(string name)
        {
            cout << "Calling [" << name << "]\n";
        }

        void receiveCall(string name, int number)
        {
            cout << "Calling [" << name << "] - " << number;
        }
      

        int getNumber(int number_t)
        {
            return number_t;
        }

    private:
        int number;
        string model;
        float weight;

};

int main()
{
    int number = 599346768;
    int weight = 148;
    Phone my_phone(number,"Iphone 8",weight);
    my_phone.receiveCall("Tanya", number);


    return 0;
}
