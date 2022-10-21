#include <iostream>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void DoWork() 
{
	for (size_t i = 0; i < 10; i++) 
	{
		cout << "ID thread = " << this_thread::get_id() << "\tDoWork" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}

int main(int argc, char const *argv[])
{

	thread th(DoWork);

	DoWork();

	for (size_t i = 0; i < 10; i++) 
	{
		cout << "ID thread = " << this_thread::get_id() << "\tmain" << i<< endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.detach();

	return 0;
}
