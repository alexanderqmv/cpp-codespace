#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string path = "main.txt";  
   

    ifstream fin;

    fin.open(path);

    if (fin.is_open())
    {
        cout << "File opened successfully" << endl;
        // fin.get(); // пересчитывает все символы по одному и забирает
        string ch;
        
        // get() method returs true if scaned, else false
        while(!fin.eof())
        {
            fin >> ch;
        }
    }
    else 
    {
        cerr << "Can not open the file";
    } 

    fin.close();
    return 0;
}
