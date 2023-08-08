#include<iostream>
using namespace std;
class base{
protected:// it is like a private but can be inharit
int a;
private:
int b;
};
/*
for members
                    |public derivation |private Derivation |protected derivation
1. Private member    not inharited      not inharited       not inharited
2. protected member  protected          private             protected
3. public member     public             private             protected
*/

class derived : public base{
    
};
int main (){
    base c;
    derived d;
    //  cout<<d.a;// this will not derived becose of protected member in public derivation as per chart`
    return 0;
}