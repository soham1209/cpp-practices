#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream hout("sampele60.txt"); // coneting our file with hout stream

    string name; // creating a name string and filling it with the string entered by the user
    cout << "Enter your name";
    cin >> name;
    // hout<<name;
    hout << "my name is " + name;//writing a string with the file
    hout.close();

    ifstream hin("sampele60.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is : "<<content;
    hin.close();

    return 0;
}