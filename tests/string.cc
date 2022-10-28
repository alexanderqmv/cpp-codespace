#include <iostream>
#include <vector>

using namespace std;

int main () {

    
    string name;
    int x;

    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Choose : 1) @icloud.com 2) @gmail.com\n\n Enter : 1 or 2 for your choice:: ";
    cin >> x; 

    if (x == 1) {
        cout << "\nYour Email Will be : ";
        cout << name.append("@icloud.com");
    }
    else if (x == 2) {
        cout << "\n Your Email will be : ";
        cout << name.append("@gmail.com");
    }else {
        exit(1);
    }

    return 0;
}
