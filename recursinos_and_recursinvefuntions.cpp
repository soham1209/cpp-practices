#include <iostream>
using namespace std;
int factorial(int a){
    if (a<=1)
        return 1;
    return a * factorial(a-1);
}
int fib(int n){
    if (n<2)
        return 1;
    return fib(n-2) + fib (n-1);

}
int main()
{//factorial of a number:
   int a;
   cout << "Enter a number"<<endl;
   cin>>a;
   cout<<"the factorial is "<<factorial(a)<<endl;
   cout<<"the fib is "<<fib(a)<<endl;
   return 0;
}