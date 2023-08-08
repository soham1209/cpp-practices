#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void printComplex(void);
    complex(void);
    complex(int);
    complex(int, int);
};
complex::complex(void)
{
    a = 0;
    b = 0;
}
complex::complex(int x)
{
    a = x;
    b = 0;
}
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
void complex::printComplex()
{
    cout << " The complex number is " << a << " + " << b << "i" << endl;
}
int main()
{
    complex o1;
    o1.printComplex();

    complex o2(5);
    o2.printComplex();

    complex o3(10, 15);
    o3.printComplex();
}
