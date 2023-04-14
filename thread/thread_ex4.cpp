#include <iostream>
#include <thread>

#include <chrono>
#include <mutex>

using namespace std;
/**
* Mutex 
* Shown how thread-security works
*/


mutex mtx;
void Print(char ch)
{
    this_thread::sleep_for(2000ms); // this section is not locked by mutex
    /*==========LOCKED==========*/
    mtx.lock();
    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 10; ++i)
        {
            cout << ch;
            this_thread::sleep_for(20ms);
        }
        cout << endl;
    }

    cout << endl;
    mtx.unlock();
    /*==========UNLOCKED==========*/
    this_thread::sleep_for(2000ms); // this section is not locked by mutex
}


int main()
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = chrono::system_clock::now();
    thread th1(Print, '@');
    thread th2(Print, '*');
    th1.join();
    th2.join();
    end = chrono::system_clock::now();
    
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Elapsed time: " << elapsed_seconds.count() << "s\n";

}
