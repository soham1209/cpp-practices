/*#include <iostream>
using namespace std;

// satic vairavle in class
class Employee{
    int id;
    // int count = 0; // it take every type new memery to soham rohit and tushar
    static int count;//it takes only one time memery and continewly update it
    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){

        // cout<<"the is of the employee is "<<id<<endl;
        cout<<"the is of the employee is "<<id<< "and this is emplyee number"<<count<<endl;
    }
};
int Employee:: count;//it need to be decleard for satic variavle
int main()
{
    Employee soham,rohit,tushar;
    // soham.id = 1;       //cannot be declared becouse of it is private
    // soham.count = 1;    //cannot be declared becouse of it is private
    soham.setData ();
    soham.getData();

    rohit.setData ();
    rohit.getData();

    tushar.setData ();
    tushar.getData();
   return 0;
}*/
#include <iostream>
using namespace std;

// satic funtion in class
class Employee
{
    int id;
    // int count = 0; // it take every type new memery to soham rohit and tushar
    static int count /*= 1000*/; // it takes only one time memery and continewly update it
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {

        // cout<<"the is of the employee is "<<id<<endl;
        cout << "the is of the employee is " << id << "and this is emplyee number" << count << endl;
    }
    void static getCount(void)
    {   //cout<<id;// this will throw error only staic variale are used in staic funtion
        cout << "the value of count is " << count << endl;
    }
};
int Employee::count = 1000; // it need to be decleard for satic variavle
int main()
{
    Employee soham, rohit, tushar;
    // soham.id = 1;       //cannot be declared becouse of it is private
    // soham.count = 1;    //cannot be declared becouse of it is private
    soham.setData();
    soham.getData();
    Employee::getCount(); // this and its net line perform as same
    // soham.getCount();

    rohit.setData();
    rohit.getData();
    Employee::getCount(); // this and its net line perform as same// runs withot refrance to objects
    // rohit.getCount();

    tushar.setData();
    tushar.getData();
    Employee::getCount(); // this and its net line perform as same
    // tushar.getCount();
    return 0;
}