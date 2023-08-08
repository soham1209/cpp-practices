// basisc code
/*#include <iostream>
using namespace std;

int main()
{int sum = 3;
   cout << "the sum of digits is "<<sum;
   return 0;
}*/
// basic input output
/*
#include <iostream>
using namespace std;
int main()
{
   int num1, num2, count;
   cout << "etner the number you want to print"; // << is a insrestion oprater
   cin >> num1;                                  // >>this is extracton oprater
   cout << "Enter the second number you want to print";
   cin >> num2;
   count = num1 + num2;
   cout << "the sum of two number is :" << count;
}*/
// operator in c
/*#include <iostream>
using namespace std;
int main()
{
   cout << "operator int c ++" << endl; // endl is used for next line
   // arithme matic operator as a c
   // assingnment operator as a c
   // comparison operator as a c
   // cout<< "the value the a == b is "<<(a==b)<<endl;// brakects is nessery becouse of endl
   // logical operator
   // if a== b && a<b then true it cheks two codtion<<((a == b )&& (a < b));
   return 0;
}*/

// local Global variable,type casting ,littrals
// #include <iostream>
// using namespace std;
// int c = 445;
// int main()
// {
// int a, b;
// cout << "enter the value of first digit";
// cin >> a;
// cout << "enter the value of second digit";
// cin >> b;
// int c = a + b;
// cout << " the additon of the two numbers is " << c <<endl;
// cout << " the global c is  " <<::c;//:: scope resultion operator for getting globle value in the place

//*******************  littrals******************
// float d = 34.4;// if the sentex is writte the compiler gets bydefult is it as double in cout
// float d = 34.4f;// ths makes it float
// long double e = 34.4l;
// cout << "teh value of is " << d << endl
//      << "the value fo e is " << e;
//******** Reference varibale************
// soham___________>kaushal________>iron man
// float x = 455;
// float & y = x;//just givng multiple name to single variable
// cout<<y<<endl;
// cout<<x<<endl;
// *********************type casting****************
// int a = 45;
// float b = 56.23;
// cout << "the value of a is " << (float)a << endl;
// cout << "the value of a is " << float(a) << endl; // this can be written as well also
// cout << "the value of b is " << (int)b;
// int c = (int)b;
// return 0;
// }