#include <iostream>
using namespace std;
 
int main()
{

    // besic pointer
    int a = 7;
    int* ptr = &a;  
   cout << "The value of a is "<<*(ptr)<<endl;

   //new oprator/keyword
//    int *p = new int (70);
   float *p = new float (70.78);
   cout<<"The value of p is "<<*(p)<<endl;
   cout<<"The adddress of p is "<<p<<endl;

   int *arr = new int [3];
   arr[0] = 10;
   arr[1] = 20;
//    *(arr+1) = 20;
   arr[2] = 30;
   cout<<"The adddress of arr[0] is "<<arr[0]<<endl;
   cout<<"The adddress of arr[1] is "<<arr[1]<<endl;
   cout<<"The adddress of arr[2] is "<<arr[2]<<endl;
   
//    delete oprator
    delete[] arr;
   cout<<"The adddress of arr[0] is "<<arr[0]<<endl;
   cout<<"The adddress of arr[1] is "<<arr[1]<<endl;
   cout<<"The adddress of arr[2] is "<<arr[2]<<endl;
   return 0;
}