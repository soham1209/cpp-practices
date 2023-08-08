#include <iostream>
using namespace std;
class Base1
{
public:
    void Greet()
    {
        cout << "How are you?";
    }
};
class Base2
{
public:
    void Greet()
    {
        cout << "kas kay?";
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void Greet()
    {
        Base1::Greet();
        
    }
};
// ***************************
class b
{
public:
    void say()
    {
        cout << "hellow world " << endl;
    }
};
class d : public b
{
    int a;
    // d's new say()menthid will override base class's say() method
public:
    void say()
    {
        cout << "hellow may beautiful people" << endl;
    }
};

int main()
{
    // ambiguty 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.Greet();
    base2obj.Greet();
    Derived derived1obj;
    derived1obj.Greet();
    /*
   b b1;
   d d1;
   b1.say();
   d1.say();
   */

    return 0;
}
