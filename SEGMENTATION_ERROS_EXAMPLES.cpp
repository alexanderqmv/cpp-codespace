#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define N 10
#pragma warning(disable:139)

void segmentation_err1() {
    int arr[10];
    arr[100] = 777;


    std::cout << arr[100] << std::endl;

}

void segmentation_err2() {

    const char * s = "hello world";
    * (char *) s = 'H';

    delete s;

}

int main () {


    segmentation_err1();
    segmentation_err2();





    return 0;
}
