/*
//friend funtion
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    friend complex sumComplex(complex ,complex);
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void pointNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 3);
    c1.pointNumber();

    c2.setNumber(4, 5);
    c2.pointNumber();

    sum = sumComplex(c1, c2);
    sum.pointNumber();

    return 0;
}
/*
propeties of friend funtions
1, Not in the scope of class
2.since it is  not the scope of the class ,ti cnnot be called from the boject of that class c1.sumComplex()== nvalid
3.Can be invoked without the help of any object
4. Usuallly contans the objects as arguments
5. can be declard inside public or private section of the class
6. It cannot access the members directly by thein names and need object_name.member_name to access any member
*/






// friend class
#include <iostream>
using namespace std;
class complex; // forword declartion
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex); // compiler still not have the garenty of o1.a and o1.b is prestet or not thats why here only declartion
    int sumComComplex(complex, complex);  // compiler still not have the garenty of o1.a and o1.b is prestet or not thats why here only declartion
};
class complex
{
    int a, b;
    // indivisuly declearing as frend but what if ther are 100 of function then it is very deficult to declsre every function thats why friend class
    //  friend int calculater::sumRealComplex(complex, complex); // hear we are accesing the funtin of calculater class thats why calculater should be present on up side of this class
    //  friend int calculater::sumComComplex(complex, complex); // hear we are accesing the funtin of calculater class thats why calculater should be present on up side of this class
    // friend class
    friend class calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{

    complex o1, o2;
    o1.setData(1, 4);
    o2.setData(7, 8);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "the sum of real part of complex number is " << res << endl;
    int ress = calc.sumComComplex(o1, o2);
    cout << "the sum of real part of complex number is " << ress << endl;

    return 0;
}





// more  with friend funtion
/*#include <iostream>
using namespace std;
class y;//forword declaration becouse compiler didnt know what is y in freind funtion
class x
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void add(x,y);
};
class y
{
    int num;

public:
    void setData(int value)
    {
        num = value;
    }
    friend void add(x,y);
};
void add(x o1,y o2){
    cout <<"summing datas of x and y objects gives me "<<o1.data + o2.num;
}
int main()
{
x a1;
a1.setData(2);
y b1;
b1.setData(5);

    add(a1,b1);
    return 0;
}
*/
// swaping two private
/*
#include <iostream>
using namespace std;
class c2;
class c1{
    int val1;
    public:
    void inData(int a){
    val1 = a;
    }
    void display(void ){
        cout<<val1<<endl;
    }
    friend void exchange(c1 &,c2 &);
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);//friend function can be written in public or private no effect
    public:
    void inData(int a){
    val2 = a;
    }
    void display(void ){
        cout<<val2<<endl;
    }

};
void exchange(c1 &x,c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
c1 oc1;
c2 oc2;

oc1.inData(34);
oc2.inData(43);

exchange(oc1,oc2);
cout<<"the vaue of c1 is now become ";
oc1.display();
cout<<"the vaue of c2 is now become ";
oc2.display();
   return 0;
}*/