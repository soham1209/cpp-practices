// oops - classes and object
//  c++ --> Iniitially called --> c with classes
// class -->extension of structures
//  Structures had limitions
//       --> mebers are public
//       -->no methods
//  class = structures + more
//  class can have method s and proprties
//  class can make members as public and private
//  structures in c++ are typedefed
//  you can declar ovkects along with teh class dexlarion like this
/*class emplyee
class definiton
}harry, rohan*/

// nesting of member funtion
#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    // void chk_bin(void);// if check binarry is in privet then it is not accessbale in main function

public:
    void read(void);
    void chk_bin(void); 
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    chk_bin(); // here the check binary function is nested in member function
               // for without nesting remove the coment in main
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "\nDispalying you binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();//for nesting of member function this function is go in ones_compliment functin
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}