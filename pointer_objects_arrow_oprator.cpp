#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "the real number is " << real << endl;
        cout << "The imaginary number is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{ // use of objects with pointer
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(4, 5);// it is same as
    ptr->setData(4, 5); // use of arrow oprater
    // (*ptr).getData(); // or
    ptr->getData();

    // use of array
    complex *ptr1 = new complex[4];
    ptr1->setData(14, 25); // use of arrow oprater
    ptr1->getData();

    return 0;
}