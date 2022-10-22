#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <stack>
using namespace std;


int main(int argc, char const *argv[])
{

	int c = 'N';
	int *x = &c;
	cout << c << endl << x << endl <<  *x << (char *) x;

	stack<int> stck_1,stck_2;
	stck_1.push(1);
	stck_1.push(2);
	stck_1.push(3);
	stck_1.push(4);

	cout << "The top element in stack using TOP():: " << stck_1.top();
	cout << "\nElements in stack are:: ";

	while (!stck_1.empty())
	{
		cout << stck_1.top() << " ";
		stck_1.pop();
	}

	return 0;
}
