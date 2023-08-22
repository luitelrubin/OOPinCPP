/*
Containership
*/
// #include <cstring>
#include <iostream>
using namespace std;

class Employee
{
    int eid, salary;

public:
    void getdata()
    {
        cout << "Enter Id and salary of employee: ";
        cin >> eid >> salary;
    }

    void showdata()
    {
        cout << "EID: " << eid << ", Salary: " << salary << endl;
    }
};
class Company
{
    int cid;
    char cname[20];
    Employee e;
    // An object of Employee class is used in Company class
    // So Employee is contained in Company. Or, a company has an employee.

public:
    void getdata()
    {
        cout << "Enter id and name of the company: ";
        cin >> cid >> cname;
        e.getdata();
    }

    void showdata()
    {
        cout << "Company Id: " << cid << ", Company name: " << cname << endl;
        e.showdata();
    }
};

int main()
{
    Company c;
    c.getdata();

    cout << "*****Company information*****" << endl;
    c.showdata();
    return 0;
}

/*
Output:
Enter id and name of the company: 1 The_Notesellers
Enter Id and salary of employee: 007 100000
*****Company information*****
Company Id: 1, Company name: The_Notesellers
EID: 7, Salary: 100000
*/