#include <iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;
union student
{
    int rupees; // only one value is determine in 3
    char usd;
    float pounds;
};
int main()
{
    enum show
    {
        breakfast,
        lunch,
        dinner
    };
    // cout << breakfast;
    // cout << lunch;
    // cout << dinner;
    show m1 = lunch;
    cout << (m1 == 2); // it return 1 if true and 0 if false

    // struct employee harry;
    // cout<<"the value is "<<m1.usd<<endl;
    // ep harry;
    // harry.eId = 1;
    // harry.favChar = 'a';
    // harry.salary = 50000.45;
    // cout << "the value is " << harry.eId << endl;
    // cout << "the value is " << harry.favChar << endl;
    // cout << "the value is " << harry.salary << endl;

    // union student m1;
    // m1.rupees = 35;
    // // m1.usd = 'd';
    // cout<<"the value is "<<m1.rupees<<endl;

    return 0;
}