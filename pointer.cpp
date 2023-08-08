//************* pointer ***********
// #include <iostream>
// using namespace std;

// int main()
// { // What is a pointer? -----> data type which holds the address of other data type
//     int a = 3;
//     int* b = &a;
//     //&-------> addrrss of operator
//     cout << "The address of a is " << &a << endl;
//     cout << "The address of a is " << b << endl;
//     // *------>(value at) dereference operator
//     cout << "The value at address b is " << *b << endl;
//     int a = 3;
//     int *b = &a;
//     cout << " " << b << endl
//       << &b << endl
//       << *b << endl
//       << &*b;
//     return 0;
// }
//************ Array and pointer Arithmetic*************
#include <iostream>
using namespace std;

int main()
{
   // int arr[3];
   // int mark[] = {23,456,45,354};
   // cout << "enter the digit ";
   // for (int i = 0; i < 3; i++)
   // {
   // cin >> arr[i];
   // }
   // for (int i = 0; i < 3; i++)
   // {
   // cout << "the "<<i<<" element is " << arr[i]<<endl;
   // }
   // //you can change the vlaue
   // mark[3] = 3;
   // ------<like we give value to pointer with &operator but in array the address of first elemt of pointer is the name of array
   int arr[4] = {45, 54, 78, 97};
   int *p = arr;
   cout<<*(p++)<<end;
   cout<<*p;
   // for (int i = 0; i < 4; i++)
   // {
   //    cout << "The value of marks " << i << " is " << arr[i] << endl;
   // }
   // cout << "The value of marks[0] is " << *p<<endl;
   // cout << "The value of marks[1] is " << *(p+1)<<endl;
   // cout << "The value of marks[2] is " << *(p+2)<<endl;
   // cout << "The value of marks[3] is " << *(p+3)<<endl;

   return 0;
}