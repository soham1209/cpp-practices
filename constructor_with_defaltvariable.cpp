#include <iostream>
using namespace std;
class simple
{
private:
    int data1, data2, data3;

public:
    void printData();
    simple(int, int, int = 30);
};
simple::simple(int a, int b, int c)
{
    data1 = a;
    data2 = b;
    data3 = c;
}
void simple::printData()
{
    cout << "the addtion of your data is " << data1 + data2 + data3<<endl;
}
int main()
{
    simple o1(4, 5, 20);
    o1.printData();
    simple o2(5,6);
    o2.printData();
}