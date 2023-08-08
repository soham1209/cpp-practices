#include <iostream>
using namespace std;


class student
{
protected:
    int rollNumber;

public:
    void setRollNumber(int);
    void getRollNumber(void);
};
void student::setRollNumber(int r)
{
    rollNumber = r;
}
void student::getRollNumber()
{
    cout << "the roll number is : " << rollNumber << endl;
}


class exam : public student
{
protected:
    float maths, physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void exam::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam::getMarks()
{
    cout << "the marks opten in maths " << maths << endl
         << "the marks opten in phusics " << physics << endl;
}


class result : public exam
{
    float percentage;

public:
    void display()
    {
        getRollNumber();
        getMarks();
        cout << "your percentage is " << (maths+physics) / 2 <<"%"<< endl;
    }
};
/*
Notes:
if we are inheriteing b from a and c from b[a--->b--->c]
1.  A is the base class for b and 
    b is the base class for c
2.  A--->B--->c is called as inheritance path    
2.*/
int main()
{   result soham;
    soham.setRollNumber(420);
    soham.setMarks(94.0 , 90.0);
    soham.display();
    return 0;
}
