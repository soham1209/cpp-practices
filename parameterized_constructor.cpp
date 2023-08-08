#include <iostream>
using namespace std;
class complex
{
private:
    int p, q;

public:
    void printComplex(void);
    complex(int, int);
};
complex::complex(int a, int b)
{
    p = a;
    q = b;
}
void complex::printComplex()
{
    cout << " the complex number is " << p << " + " << q << "i"<<endl;
}
int main()
{
    complex o1(5, 7);//implicit call
    o1.printComplex();
    complex o2 = complex(10 ,5);//explicit call
    o2.printComplex();
    return 0;
}