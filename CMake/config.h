#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include <map>

using namespace std;


enum speed {light=300000, volume=355};

struct datas {
	uint x;
	uint y;
	uint xy;

	void method();
};
