#include <iostream>
using namespace std;
// syntex for inheriting in multiple inheritance
// call derrivedC:visiblity mode base1,bisibiltty mode base2
// {
//     class body in class "derivedC"
// }
class base1
{
protected:
    int base1Int;

public:
    void setbase1Int(int a)
    {
        base1Int = a;
    }
};
class base2
{
protected:
    int base2Int;

public:
    void setbase2Int(int a)
    {
        base2Int = a;
    }
};
class base3
{
protected:
    int base3Int;

public:
    void setbase3Int(int a)
    {
        base3Int = a;
    }
};
class Derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << " The value of base1 is " << base1Int << endl;
        cout << " The value of base2 is " << base2Int << endl;
        cout << " The value of base3 is " << base2Int << endl;
        cout << " The sum of base1 and base2 is " << base1Int + base2Int + base2Int << endl;
    }
};
/*
the inharited class will look like
data member
    base1Int---> protected
    base2Int---> protected
member funtion
    setBase1Int()--->public
    setBase2Int()--->public
    show()---> public
*/
int main()
{
    Derived soham;
    soham.setbase1Int(24);
    soham.setbase2Int(34);
    soham.setbase2Int(54);
    soham.show();
    return 0;
}