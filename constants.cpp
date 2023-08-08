#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // *******constant*******
    // int a = 32;
    // cout << "The value of a was " << a<<endl;
    // a = 45;
    // cout << "the value of is " << a<<endl;
    // contance in c++
    // const int a = 3;// it make the value constant
    // cout << " The value of a is "<< a;
    // a = 34; you get error becouse you using const
    // cout << "the value of a is "<<a;
    // *******manipulator*******
    // int a =3,b= 45,c= 4567;
    // cout<<"the value of a is "<<setw(4)<<a<<endl;
    // cout<<"the value of b is "<<setw(4)<<b<<endl;
    // cout<<"the value of a is "<<setw(4)<<c<<endl;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of b is "<<b<<endl;
    // cout<<"the value of c is "<<c<<endl;
    // ******operator precedence**********
    int a = 3, b = 4;
    int c = a * 5 + b;
    cout << c;
    return 0;
}