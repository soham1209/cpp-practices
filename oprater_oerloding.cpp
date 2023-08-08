                                                                //unary operator
/*
#include<iostream>
using namespace std;
class space{
    int x;
    int y;
    int z;
    public:
    void getdata(int a,int b,int c);
    void display(void);
    void operator - ();             //overload unary minus
};
void space::getdata(int a,int b,int c){
    x =a;
    y =b;
    z =c;
}
void space::display(void){
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<" ";
}
void space::operator-()             //definign operator -()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space s;
    s.getdata(10,-20,30);
    cout<<"s: before overloading:";
    s.display();
    cout<<endl;
    -s;                             //activates operator -()
    cout<<"s: After overloading:";
    s.display();
    cout<<endl;
}
*/

                                                    //overloading of increment operator
#include<iostream>
using namespace std;
class fibo{
    private:
    int fib0,fib1,fib2;
    public:
    fibo();//default constructor
    void operator ++();//overloading diclaration
    void dis();
};
fibo::fibo(){
    fib0 = 0;
    fib1 = 1;
    fib2 = fib0+fib1;
}
void fibo::dis(){
    cout<<fib2<<"\t";
}
void fibo::operator++()  
{
    fib0 = fib1;
    fib1 = fib2;
    fib2= fib0 + fib1;
}
int main(){
    fibo ob1;
    int n;
    cout<<"How many numbers you want?:";
    cin>>n;
    for (int i = 0; i <= n; ++i)
    {
        ob1.dis();
        ++ob1;
    }
    return 0;
}