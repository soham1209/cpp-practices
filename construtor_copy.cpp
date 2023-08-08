#include <iostream>
using namespace std;
class number
{
private:
    int a;

public:
    number()
    {
        a = 0;
    };
    number(int n)
    {
        a = n;
    }
    number(number &obj)
    {
        cout << "copy constructor call";
        a = obj.a;
    }
    void display();
};
void number::display()
{
    cout << a;
}
int main()
{
    number ob1, ob2, ob3(45),z2;
    ob2.display();
    number z1(ob3);// if copy constructor is not made then it also work becouse every class have one copy constructor by default
    z1.display();//incoked copy constructor
z2 = ob3;// copy constructor not called 
number z3 = ob3;//copy constructor invoked//ob 3 vlaue is assign to new object
}