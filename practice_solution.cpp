#include <iostream>
#include <cmath>
using namespace std;
class simpleCalculator
{
protected:
    int a;
    int b;

public:
    void getdata()
    {
        cin >> a>>b;
    }
    void dispaly()
    {
        cout << "the additon of a and b is " << a + b << endl;
        cout << "the subtraion of a and b is " << a - b << endl;
        cout << "the multiplication of a and b is " << a * b << endl;
        cout << "the dividataion of a and b is " << a / b << endl;
    }
};
class scintificCalculator
{
    int a;

public:
    void Getdata()
    {
        cin >> a;
    }
    void Display()
    {
        cout << "the cos(a) is " << cos(a) << endl;
        cout << "the sin(a) is " << sin(a) << endl;
        cout << "the tan(a) is " << tan(a) << endl;
        cout << "the exp(a) is " << exp(a) << endl;
    }
};
class hybridcalculator : public simpleCalculator, public scintificCalculator
{
};

int main()
{
    hybridcalculator soham;
    soham.getdata();
    soham.Getdata();
    soham.dispaly();
    soham.Display();

    return 0;
}