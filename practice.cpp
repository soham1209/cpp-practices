#include <iostream>
using namespace std;
class reverse
{
    int n;

public:
    void setNumber()
    {
        int x;
        cout << " Give the number you want reverse of " << endl;
        cin >> x;
        n = x;
    }
    void reverseNumber();
    friend void show(reverse);
};
// void reverse::reverseNumber()
// {
//     int remainder, reverse = 0;
//     while (n != 0)
//     {
//         remainder = n % 10;
//         reverse = reverse * 10 + remainder;
//         n /= 10;
//     }
//     cout << "reverse NUmber - " << reverse;
// }
void show (reverse a){
    int remainder, reverse = 0;
    while (a.n != 0)
    {
        remainder = a.n % 10;
        reverse = reverse * 10 + remainder;
        a.n /= 10;
    }
    cout << "reverse NUmber - " << reverse;
}
int main()
{
    reverse y;
    y.setNumber();
    show(y);
    return 0;
}