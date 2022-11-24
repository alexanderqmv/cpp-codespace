#include <iostream>

using namespace std;

int main() 
{
    int N = 0;
    int SUM = 0;

    cout << "To break the program, type: `0 + Enter`. \n\n> ";
    while (cin>>N)
    {
        
        if (N < 1)
        {
            cerr << "\033[41mInput Error::\033[0m `" << N <<  "`\033[34m -  undefined reference\033[0m";
            break;
        }
        else 
        {
            for (int i = 1; i < N; ++i)
            {
                SUM+=i;
                
            }
            cout << "SUM = " << SUM << "\n";
            
        }
    }

    return 0;
}
