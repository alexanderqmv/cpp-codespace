#include <iostream>
using namespace std;

int main()
{
   int j;

   cout << "Enter  numbers of elements for array: ";
   
   cin >> j;
   int arr[j];
   
   for (int i = 0; i < j; i++) {
   	cin >> arr[i];
   }

   cout << "you entered ";
   
   for (int i = 0; i < j; i++) {
   		cout << arr[i] << "\t";
   }
 	
   cout << endl;

   cout << arr[0] + arr[1];


}
