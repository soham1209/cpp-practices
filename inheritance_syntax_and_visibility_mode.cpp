#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
// Derive class syntax
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}
notes
1.Default visibility mode is private
2. public visibility mode: Public members of the base class become public members of the derived class
3. private visibility mode: Public members of the base class become private members of the derived class
4. private member are never inharited
*/
// creating a programmer class derived from Employee base class -
class programer : /*public*/ Employee//employee direct call defalt construtor of base class that why the default constructor is made in emplyee class
{
public:
    programer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee soham(1), rohit(2);

    cout << soham.salary << endl;
    cout << rohit.salary << endl;
    programer skillf(10);//for this default contructor is called  
    cout << skillf.languageCode<< endl;
    // cout << skillf.id<<endl;
    skillf.getData();
    return 0;
}