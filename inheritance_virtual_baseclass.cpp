#include <iostream>
using namespace std;
/*
test---> is derived form virutual base class ---->student
sports ---> is derived form virutual base class ---->student
result ---> test
result ---> sports

*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll noi is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your marks are:" << endl
             << "maths :" << math << endl
             << "physics :" << physics << endl;
    }
};
class Sports : public virtual Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void porint_score(void)
    {
        cout << "The score of your is " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = math + physics + score;
        print_number();
        print_marks();
        porint_score();
        cout << "your total score is :" << total << endl;
    }
};
int main()
{
    Result soham;
    soham.set_number(23);
    soham.set_marks(89.5, 98.6);
    soham.set_score(89);
    soham.display();
    cout << "you got success full" << endl;
    return 0;
}