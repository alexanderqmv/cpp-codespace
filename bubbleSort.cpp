#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[20] = {10,2,0,14,43,25,18,1,5,45, 69, 32, 98 , 3, 100, 21,41, 33, 71, 99};
   cout <<"Input list ...\n";
   for(i = 0; i<20; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<20; i++) {
   for(j = i+1; j<20; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<20; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
