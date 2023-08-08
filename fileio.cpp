#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // opening file using constructor and writeing it
    string st = "soham nana";
    string st2;
    //     ofstream out("sampele60.txt");//write operation
    //    out << st;

    // opening file using constructor and reading to it
    ifstream in("sampele60b.txt"); // reading operation
    //    in >> st2;
    getline(in, st2);
    cout << st2;
    return 0;

} /*useful calasses for working wiht files in c++ are
 1.fsteambase
 2.ifstream  --->derived from fstreambase
 3.ofstream  --->derived from fstreambase

 In order to work with files in c++
 you will have to open it.
 primarily ther are 2 ways to open a file :
 1. using the constructor
 2. using the member funtion open()of the class

 */
