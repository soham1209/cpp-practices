#include <iostream>
using namespace std;

/*
case1:
class a: public a{
    //order of executono fconstructor -> firstr a( ) then b()
}
case2:
class a: public b.public c{
//order of exction of constructor -> b() then c() then a()
}
case3:
calss a: pubic b,vertual public c{
    // order of extuion of constructor -> c() then b() then a()
}
*/
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << " base1 calss constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << " base2 calss constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constrctor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "the value of derived 1 is " << derived1 << endl
             << "the valure of derive 2 is " << derived2 << endl;
    }
};
int main()
{
    derived soham(1,2,3,4);
    soham.printDataBase1();
    soham.printDataBase2();
    soham.printDataDerived();
    cout << "";
    return 0;
}