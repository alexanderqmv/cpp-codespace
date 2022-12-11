#include <iostream>

using namespace std;

class b;

class a
{
    friend int sum(a,b);
    friend int minuss(a,b);
    private:
        int x = 5130;
};

class b
{
    friend int sum(a,b);
    friend int minuss(a,b);
    private:
        int y = 270;;
};

int sum(a first ,b second)
{
    return first.x + second.y;
}

int minuss(a first, b second)
{
    return first.x - second.y;
}
int main()
{   
    a first;
    b second;

    cout << sum(first,second) << endl;
    cout << minuss(first,second);

    return 0;
}
