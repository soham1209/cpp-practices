#include <iostream>
// creating a constructor
// constructor is a special member function with same name as of the class
// it is used to intialize the objects of its class
// ti is automaticllay invoked whhenever an object is created
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(void);//declaring constructor
    void printComplex(void);
};
complex::complex(void){//defining constructor
    a = 10;
    b = 3;
}
void complex::printComplex(void){
    cout<<"The given complex number is "<<a<<" + "<<b<<"i";
}
int main(){
    complex o1;
    o1.printComplex();

}
/*
characterstics of constructors
1. It should be declardin the public section of the class
2. They are automatically invoked whenver the object is crated
3. they cannot retrn vlaues and do not have return types
4. It can have default arguments
5. we cannot refer to their address
*/