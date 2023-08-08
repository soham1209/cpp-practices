#include <iostream>
using namespace std;
// function prototype
// type funtion name(argument)
int sum(int,int);
// int sum(int a,int b);

int main()
{
    int num1, num2;

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "the sum of the numbers is " << sum(num1, num2);
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}