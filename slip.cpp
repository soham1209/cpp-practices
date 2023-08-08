#include <iostream>
using namespace std;
int mean(int a, int b, int c)
{
    return (a + b + c) / 3;
}
int median(int a, int b, int c)
{
    if (b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (c < b)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    if (b < a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "The median is " << b;
    return 0;
}
int mode(int a, int b, int c)
{
}
int main()
{
    int a, b, c;
    int m;
    cout << "Enter 1 for mean" << endl
         << "Enter 2 for median" << endl
         << "Enter 3 for mode" << endl;
    cin >> m;

    switch (m)
    {
    case 1:
        cout << "Enter the three digits you want to mean of ";
        cin >> a >> b >> c;
        mean(a, b, c);
        break;
    case 2:
        cout << "Enter the three digits you wnat to median of ";
        cin >> a >> b >> c;
        median(a, b, c);
        break;
    case 3:
        cout << "Enter the three digits you want to mode of ";
        cin >> a >> b >> c;
        break;
    default:
        cout << "You feed wrong input";
        break;
    }

    return 0;
}