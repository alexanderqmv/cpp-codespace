#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
       ofstream FileOut;
       char fileName[] = "mainx.cpp"; 

       FileOut.open(fileName,ofstream::app);

       if (!FileOut.is_open())
       {
              cout << "Error Of Opening File" << endl;
       }
       else
       {
              //FileOut << "#include <iostream>\nusing namespace std; \n\nint main(int argc, const char* argv[]) {\n\nreturn 0;\n}";
              static int x;
              printf("Enter Integer: ");
              scanf("%d", &x);
              FileOut << endl << endl << &x << " -> " << x;
              static char* str = new char[100];

              printf("Enter char: ");
              scanf("%s", &*str);
              FileOut << endl << endl << &str << " -> " << str;
              cout << "Successfully! Please check:: " << fileName << endl;

              free(str);

       }

       FileOut.close();

       return 0;
}
