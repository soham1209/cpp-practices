#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructoris called for object number" << endl;
    }
    ~num()
    {
        cout << "this is the time when destrucore is called for boject number" << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main funtion " << endl;
    cout << "creating girst object n1" << endl;
    num n1;
    {
        cout << "entring this block" << endl;
        cout<<"Creatin two more objects"<<endl;
        num n2,n3;
        cout << "exitg this block " << endl;
    }
    cout << "Back to main " << endl;
    return 0;
}