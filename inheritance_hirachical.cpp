#include <iostream>
using namespace std;
class Employee
{
protected:
    char name[30];
}; // end of base class
class fullTimeEmp : protected Employee
{
protected:
    float dailyRate, salary;
    int noOfDays;

public:
    void readEmpData();
    void displayEmpData();
    void calculateSalar();
}; // first derived class
void fullTimeEmp::readEmpData()
{
    cout << endl
         << "enter name of employee =";
    cin >> name;
    cout << endl
         << "Enter workin rate for one day =";
    cin >> dailyRate;
    cout << endl
         << "Enter no of working days of employee =";
    cin >> noOfDays;
}
void fullTimeEmp::calculateSalar()
{
    salary = dailyRate * noOfDays;
}
void fullTimeEmp::displayEmpData()
{
    cout << endl
         << "for the full time emplyee: =";
    cout << endl
         << "Name = " << name;
    cout << endl
         << "daily rate =" << dailyRate;
    cout << endl
         << "salary =" << salary;
}
class partTimeEmp : protected Employee
{
protected:
    float hourlyRate, salary;
    int noOfHour;

public:
    void readEmpData();
    void displayEmpData();
    void claculateSalary();
}; // end of derived class 2
void partTimeEmp::readEmpData()
{
    cout << endl
         << "enter name of Employee=";
    cin >> name;
    cout << endl
         << "Enter woikng rate for one hour =";
    cin >> hourlyRate;
    cout << endl
         << "enter no of working hours for employee =";
    cin >> noOfHour;
}
void partTimeEmp::claculateSalary()
{
    salary = hourlyRate * noOfHour;
}
void partTimeEmp::displayEmpData()
{
    cout << endl
         << "for the part time employee";
    cout << endl
         << "name =" << name;
    cout << endl
         << "hourly rate =" <<hourlyRate;
    cout << endl
         << "no of working hours = " << noOfHour;
    cout << endl
         << "salary=" << salary;
}
int main()
{
    int choice;
    cout << endl
         << "you have following choices";
    cout << endl
         << "1- read &display information of full time employee";
    cout << endl
         << "2- read &display information of full time employee";
    cout << endl
         << "Enter your choice=";
    cin >> choice;
    switch (choice)
    {
    case 1:
        fullTimeEmp ft; // first read data
        ft.readEmpData();
        ft.calculateSalar();// now display data
        ft.displayEmpData();
        break;

    case 2:
        partTimeEmp pt; // first read data
        pt.readEmpData();
        pt.claculateSalary(); // now display data
        pt.displayEmpData();
        break;

    default:
    break;
    }
    return 0;
}