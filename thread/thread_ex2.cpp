#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

/*
* Multithread programming 
* Implementing two functions => do_work() and some_operations to show 
* how multithreading works!
* @author: @ynwmqv (Codespace)
*/


void do_work(int a, int b)
{
     this_thread::sleep_for(3000ms);
     cout << "===========\t" << "do_work() STARTED" << "\t============\n";
     cout << "a + b = " << a + b << endl;
     this_thread::sleep_for(3000ms);
     
     cout << "===========\t" << "do_work() STOPPED" << "\t============\n";
}
double some_operations(double x, double y)
{
    this_thread::sleep_for(3000ms);
    cout << "\n===========\t" << "some_operations() STARTED" << "\t============\n";
    this_thread::sleep_for(3000ms);

    cout << "===========\t" << "some_operations() STOPPED" << "\t============\n";
    return std::pow(x, y);
}

int main()
{
    thread th1(do_work, 5, 10);
    double result;
    thread th2([&result]() { result = some_operations(10, 4); });
    
    for (int i = 0; i < 10; ++i)
    {
        cout << "THREAD ID = " << this_thread::get_id() << "\tmain() works\t" << i << endl;
        this_thread::sleep_for(500ms);
    } 
    th1.join();
    th2.join();
    cout << "Result of some_operations(): " << result << endl;
    
    return 0;
}
