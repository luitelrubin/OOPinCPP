/*
C++ Structures
*/

#include <iostream>
using namespace std;
struct Employee
{
private:
    int eid, sal;

public:
    void getdata()
    {
        cout << "Enter ID and Salary of an employee: ";
        cin >> eid >> sal;
    }
    void display()
    {
        cout << "Employee ID: " << eid << " | Salary: " << sal << endl;
    }
};
int main()
{
    Employee a;
    const char dashes = '-';
    a.getdata();

    cout << "Employee Details" << endl;

    for (int i = 0; i < 31; i++)
        cout << dashes;
    cout << endl;

    a.display();

    return 0;
}

/*
Output:
Employee Details
-------------------------------
Employee ID: 21 | Salary: 50000
*/