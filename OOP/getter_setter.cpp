#include <iostream>

class Point
{
    private:
        int x;
        int y;

    public:
          int GetX()
          {
                return x;
          }


          void SetX(int x)
          {
                this->x = x;
          }
};

int main()
{
    Point p;
    std::cout << p.GetX();
    p.SetX(10);
    std::cout << std::endl;
    std::cout << p.GetX();


    return 0;
}
