#include <iostream>
using namespace std;
/*
synteax for intitializaton list in constructor:
constructor (argument - list ): initailizaton-section
{
    assignment + other code;
}
class test
{
int a,b;
public:
test(int i, int j): a(i),b(j){
    constructor body
}
};
*/
class test
{
    int a, b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(j+i)
    // test(int i, int j) : a(i), b(j * 2)
    test(int i, int j) : a(i), b(a*j)
    // test(int i, int j) : b(j),a(i * a)//--> red flag this will create problems because a is initialized first in class
    {
        cout << "contructor called" << endl
             << "value of a is " << a << endl
             << "value of  b is " << b << endl;
    }
};
int main()
{
    test t(4, 6);
    cout << "";
    return 0;
}