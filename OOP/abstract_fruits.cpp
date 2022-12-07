#include <iostream>


class Fruit
{
    public:
        virtual void getFruitName() = 0;

};

class Pineapple : public Fruit
{
    public:
         

        void getFruitName() override 
        {
            cout << "I am pineapple!";
        }

         
};

class Apple : public Fruit
{
    public:

       
        void getFruitName() override 
        {
            cout << "I am Apple!";
        }

    
};

 

int main()
{
    Pineapple pineapple;
    pineapple.getFruitName();

    std::cout << std::endl;

    Apple apple;
    apple.getFruitName();
    

    
    return 0;
}
