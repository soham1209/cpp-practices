#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
        cout << "Displaying base class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;//here baseclass objent is pointer
    BaseClass objBase;
    DerivedClass objDerived;
    base_class_pointer = &objDerived; // pointing base class pointer to derived class object
    base_class_pointer->var_base = 34;
    base_class_pointer->display(); //buinded to base class funtion// this will run base class funtion only
    // base_class_pointer ->var_display;// will throw error 
    // hear the pointer of base class is pointing to objecty of derived class
    //giving address of object to pointer
    //as per the pinter is of the base class it latebined to only the base class so it will only give acess to base class still the 27 line is valied
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &objDerived; //giving address of object to pointer
    derived_class_pointer -> var_derived = 98;
    // derived_class_pointer -> var_base = 57;
    derived_class_pointer -> display();//buinded to derived class funtion// as per the pointer id of derived class so it invoked the derived class display funtion (still ther are two display of a base and derived classs)
    cout << "";

    // hear the desition fo which funtion is called is desided in run time so the polymorphism is run time polymorphism
    return 0;
}