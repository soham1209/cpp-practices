#include <iostream>
#include <iomanip>
using namespace std;
int add(int a, int b)
{
    cout<<"using function with two aggument";
    return a + b;
}
int add(int a, int b, int c)
{
    cout<<"using function with three aggument";
    return a + b + c;
}
int volume(int r,int h){
    cout<<"\nvoulume of cylinder is "<<endl;
    return(3.14 *r*r*h);
}
int volume (int a){
    cout<<"\nvoulume of circle is "<<endl;
    return(a * a * a);
}
int volume (int l ,int b ,int h){
    cout<<"\nvolume of rectangular box"<<endl;
return(l*b*h);
}
int main()
{
    int a, b, c;
    cout << "enter the number you want to get sum of ";
    cin >>a>>b>>c;
    cout << "the sum of number you enterd is "<< add(a, b);
    // cout << "the sum of number you enterd is " << add(a, b, c);
    cout<<"the volume of cylinder is "<<setw(4)<<volume(5,6);
    cout<<"the volume of circle is "<<setw(5)<<volume(5);
    cout<<"the volume of volume is "<<volume(5,6,7);
    return 0;
}