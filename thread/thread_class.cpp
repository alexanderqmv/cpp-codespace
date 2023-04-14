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




class MyThread // methods to show how multithreading
{                 // works using Classes
public:
    MyThread() = default;
    ~MyThread() = default;
    void do_work(int a, int b);
    
    double some_operations(double x, double y);
};

 

/////////////////////////////
void MyThread::do_work(int a, int b)
{
    this_thread::sleep_for(3000ms);
    cout << "===========\t" << "do_work() STARTED" << "\t============\n";
    cout << "a + b = " << a + b << endl;
    cout << "===========\t" << "do_work() STOPPED" << "\t============\n";
}
double MyThread::some_operations(double x, double y)
{
    this_thread::sleep_for(3000ms);
    cout << "\n===========\t" << "some_operations() STARTED" << "\t============\n";
    this_thread::sleep_for(3000ms);

    cout << "===========\t" << "some_operations() STOPPED" << "\t============\n";
    return std::pow(x, y);
}
/////////////////////////////
int main()
{
    MyThread mt;
    mt.do_work(10,20);
    double res;
    thread th1([&]() // thread 1
    {
            res = mt.some_operations(20, 2);
    });
    thread th2([&]() { // thread 2
        mt.do_work(10, 20);
        });
    
    //thread th2(&MyThread::do_work, mt, 10, 20);
    for (int i = 0; i < 10; ++i)
    {
        cout << "Thread ID: " << this_thread::get_id() << "\tmain works" << endl;
        this_thread::sleep_for(3000ms);
    }
    th1.join(); // thread 1 join()
    th2.join(); // thread 2 join()

    cout << "\nres: " << res << endl;
    return 0;
}
