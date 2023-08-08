#include <iostream>
using namespace std;
void swap(int x, int y)
// this will not change the value of in main becouse only coppy of varible is present hear---------- call by refrance---------
{
    int temp = x;
    x = y;
    y = temp;
}
// for changing the value of variable we need to use ----call by value______ wich is by pointer
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// call by reference using ---------c++ reference vaiable----------
void/*int &*/ swapRefernceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}
int main()
{
    int a = 15, b = 13;

    cout << "the value if a is " << a << "and the value of b is " << b << endl;

    // swap(a, b);      // this will not change the value of in main becouse only coppy of varible is present hear---------- call by value---------

    // swapPointer(&a, &b);         // for changing the value of variable we need to use ----call by refrance______ wich is by pointer

    swapRefernceVar(a, b); // call by reference using ---------c++ reference vaiable----------
    // swapRefernceVar(a, b) = 766 ;
    cout << "the value of a is " << a << "and the value of b is " << b << endl;
    return 0;
}