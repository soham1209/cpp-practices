#include <iostream>
using namespace std;
inline int product(int x, int y)// this copy the whole code of function in the call of function
{
    return x * y;
}
float returnOnInvestment(int principle,float intrestRate = 1.04)//difalt argunt if you not give value to it it takes the value in funciton but if you give value to it in declariotn it takes that value
{
    return principle * intrestRate;
}
// int aa(const int a){

// } // if you want to make the value constant not able to change
int main()
{
    // int a, b;

    // cout << "Enter the value of first elemnt";
    // cin >> a;
    // cout << "Enter the value of second elemnt";
    // cin >> b;
    // cout << "the product of is " << product(a, b);
    int x = 44000;
    // float y = 1.010;
cout<<" Return on the principal amount "<<x<<"is "<<returnOnInvestment(x);//defult value
// cout<<" Return on the principal amount "<<x<<"is "<<returnOnInvestment(x,y);
    return 0;
}