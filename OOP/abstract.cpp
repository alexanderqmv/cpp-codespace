#include <iostream>

using namespace std;



/* Класс Figure является абтрактным, потому он содержит *
 * как минимум одну чистую виртуальную функцию.         *
 * А в данном случае даже три таких функции.            *
 * И ни одна из функций не имеет никакой реализации.    *
 * Реализацию должны определять классы-наследники.      */
/* При этом мы не можем создать объект абстрактного класса */
class figure
{
    public:
        inline virtual double getSquare() = 0;
        inline virtual double getPerimeter() = 0;
        inline virtual void showFigureType() = 0;
    
};

class Rectangle : public figure
{
    private:
        double width;
        double height;

    public:
        Rectangle(double w, double h) : width(w), height(h)
        {
            
        }

        double getSquare() override
        {
            return width * height;
        }

        inline double getPerimeter() override 
        {
            return (width * 2) +  (height * 2);
            
        }

        inline void showFigureType() override 
        {
            cout << "\nFigure Type: Rectangle";
        }
};

class Circle : public figure
{
    private:
        double radius;
    public:
        Circle(double r) : radius(r)
        {

        }

        inline double getSquare()
        {
            return radius * radius * 3.14;
        }
        inline double getPerimeter()
        {
            return 2 * 3.14 * radius;
        }
        inline void showFigureType()
        {
            cout << endl << "Figuter Type: Circle" << endl;
        }

};

int main()
{
    Rectangle rect(30,50);
    Circle circl(30);
    cout << rect.getPerimeter();
    cout << endl << circl.getPerimeter();
    return 0;
}
