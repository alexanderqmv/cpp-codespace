/*---------------------------------------*/
/*            THREAD EXAMPLES            */
/*---------------------------------------*/
/*       (C) Codespace by QMV Corp.      */
/*  @file: thread_ex1.cpp                */
/*                                       */
/*  @developer: @lexccode                */
/*  @github: https://github.com/ynwqmv   */
/*  @about: Shown interaction with Thread*/

#include <iostream>
#include <thread>

#include <mutex>
#include <atomic>

#include <chrono>

using namespace std;
void do_work()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << "Thread ID: " << this_thread::get_id() << "\t\t\t\tdo_work()" << endl;
		this_thread::sleep_for(1000ms);
	}
}

int main()
{
	thread th(do_work);	thread th2(do_work);	 
	for (int i = 0; i < 10; ++i)
	{
		cout  <<"Thread ID: " << this_thread::get_id() << "\t\t\t\tmain()" << endl;
		this_thread::sleep_for(500ms);
	}
	th.join();
	th2.join();
	 
	return 0;
}
