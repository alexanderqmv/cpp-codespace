#include <iostream>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


void MakeWork() 
{

	vector<unsigned int> vec = {1,5,7,9,2,0,11,31,54,98};
	sort(vec.begin(), vec.end());
	
	for (int i = 0; i < vec.size(); i++) {
		cout << "MakeWork online " << vec.at(i) << "\n";
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
	cout << endl;

}

void DoWork() 
{
	for (int i = 0; i < 10; i++){
		cout << "DoWork online - " << i << "\n";

	}



}

int main(int argc, char const *argv[])
{
	
	thread th(MakeWork);
	thread tH(DoWork);
	MakeWork();
	DoWork();

	th.join();
	tH.join();

	cout << endl;
	cout << endl;

	return 0;
}
