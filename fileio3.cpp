#include <iostream>
#include<fstream>
using namespace std;
 
int main()
{
    ofstream out;
    out.open("sampele60.txt");
    out<<"this is me\n";
    out<<"my soham\n";
    out<<"gandu";
   cout << "";
   out.close();

   ifstream in;
   string st,st2;
   in.open("sampele60.txt");
//    in>>st>>st2;
//    cout<<st<<st2;
while (in.eof() == 0)
{
    getline(in,st);
    cout<<st<<endl;
}

   return 0;
}