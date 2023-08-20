/*
A complete program showing use of nested class
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    void setdata()
    {
        cout << "Enter ID, Name and Salary of an employee: ";
        cin >> eid >> ename >> salary;
        cout << "Enter Date of Birth of an Employee: " << endl;
        db.setDOB();
    }
    void display()
    {
        cout << "EId: " << eid << endl;
        cout << "Name: " << ename << endl;
        cout << "Salary: " << salary << endl;
        cout << "DOB: ";
        db.displayDOB();
    }

    class DOB
    {
        int y, m, d;

    public:
        void setDOB()
        {
            cout << "Enter birth year: ";
            cin >> y;
            cout << "Enter birth month: ";
            cin >> m;
            cout << "Enter birth date: ";
            cin >> d;
        }

        void displayDOB()
        {
            cout << y << "-" << m << "-" << d << endl;
        }
    };

private:
    int eid, salary;
    char ename[20];
    DOB db;
};

int main()
{
    Employee e;
    e.setdata();
    cout << "############Employee Details############" << endl;
    e.display();
    return 0;
}

/*
Output:
Enter ID, Name and Salary of an employee: 01 RubinJr. 600000
Enter Date of Birth of an Employee:
Enter birth year: 2030
Enter birth month: 01
Enter birth date: 01
############Employee Details############
EId: 1
Name: RubinJr.
Salary: 600000
DOB: 2030-1-1
*/