#include <iostream>
#include <typeinfo>
#include <vector>
#include <limits.h>
#include <array>
 

using namespace std;


 
int main()
{   


    /*  Try-Catch blocks  */
    try
    {
        throw -1;
    }
    catch (int e)
    {
        cout << "Caught error: " << e << endl;
         
    }
    cout << endl;

    int top{  };
    int bottom{ 0 };

    try
    {   
        cout << "Your input: ";
        cin >> top >> bottom;
        cout << "top/2 = " << (top / 2) << endl;
        cout << "top divided by bottom = ";
        if (bottom == 0)
        {
            throw "divied or mod by zero";
        }
        cout << (top / bottom) << endl;
        cout << "top/3 = " << (top / 3) << endl;
    }
    catch (const char* ex)
    {
        cout << "\nError: ** " << ex << " **" << endl;
    }
    cout << "Done. " << endl;
    
   









    return 0;
}
