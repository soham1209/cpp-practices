#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A & setData(int a){
    void setData(int a)
    {
        // a = a;// this give garbage value
        this->a = a;
        // return *this;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // **this** is the keyword which is a  pointer which points the object which invokes the member funtion
    A a;
    //  a.setData(4).getData();
    a.setData(4);
    a.getData();
    cout << "";
    return 0;
}