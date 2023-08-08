#include <iostream>
using namespace std;

class Employee
{
private: // this cant be access out of the class & for accesing this in main we need fuctions
    int a, b, c;

public: // this can be access out of the class
    int d, e;
    void setData(int a1, int b1, int c1); // only declaring the function
    // void getData();                 //only declaring the function
    void getData() // also we can define the function
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{ // the function is declared in the class thats why the variable a,b,c are able to access out of the class
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee soham;
    // soham.a = 234;// this will not excutue becouse of a is privat
    soham.d = 34;
    soham.e = 89;
    soham.setData(1, 2, 4);
    soham.getData();
    return 0;
}



//use of array in class
/*#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void inItCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter id of your item no "<<counter+1<< endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item wiht id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.inItCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}*/