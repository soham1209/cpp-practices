#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base = 3;
    virtual void display()//if this is vertual function then dispaly will run derived class funciton
    {
        cout << "1Displaying base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2Displaying base class variable var_base " << var_base << endl;
        cout << "2Displaying base class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass objBase;
    DerivedClass objDerived;
    base_class_pointer = &objDerived;//this make the base fution run 
    // base_class_pointer = &objBase; //this make the base fution run 
    base_class_pointer->display(); // this will run base class funtion// this is default bavariour and to overide it the vertual funciotn is used//look line 7
    // so besicly objects polymorphism is a property by which objects which are belonging to differnt classes will respond the same type of massange
    // this is runtime polymorphism in which binding of a function is done in run time

    return 0;
}