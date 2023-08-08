// multiple parameteres
#include <iostream>
using namespace std;
/*
templete <class T1, class t2>
class nameofclass{
    //body
}*/
template <class T1, class t2>
class myClass
{
public:
    T1 data1;
    t2 data2;
    myClass(T1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl //<< data1 << endl
             << this->data2;        //<< data2;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    // myClass<char, float> obj('b', 1.6);
    obj.display();
    cout << "";
    return 0;
}