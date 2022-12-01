#include <iostream>
#include <fstream>

using namespace std;

class Point
{
    public:
        Point()
        {
            x = y = z = 0;
        }

        Point(int x, int y, int z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void print() 
        {
            cout << "X: " << x << endl << "Y: " << y << endl << "Z: " << z << endl;
        }


    int x,y,z;

};

int main()
{   
    const int SIZE = 10;
    char path[SIZE] = "class.txt";

    
    Point point(0,0,0);

    point.print();

    ofstream fout;

    fout.open(path, ofstream::app);

    if (!fout.is_open())
    {
        cerr << "Error while opening file. Maybe something miss?";
    }else 
    {
        cout << "Successfully\n";
        fout.write((char*)&point, sizeof(Point));

    }
    
    fout.close();
                                                        

    ifstream fin;
    fin.open(path);

    if(!fin.is_open())
    {
        cout << "error";
    }else 
    {
        cout <<"working ..." << endl;

        Point pnt;
        while (fin.read((char*)&pnt, sizeof(Point))) 
        {
            pnt.print();
            cout << endl;  
        }
    }

    return 0;
}
