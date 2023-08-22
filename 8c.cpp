/*
Hierarchical Inheritance
*/

#include <iostream>
using namespace std;

class Employee
{
    int eid;
    int salary;

public:
    void getEmp()
    {
        cout << "Enter Id and salary of employee: ";
        cin >> eid >> salary;
    }

    void displayEmp()
    {
        cout << "Eid: " << eid << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Engineer : public Employee
{
private:
    char dept[10];

public:
    void getData()
    {
        getEmp();
        cout << "Enter department: ";
        cin >> dept;
    }

    void displayData()
    {
        displayEmp();
        cout << "Department: " << dept << endl;
    }
};
class Typist : public Employee
{
    int tSpeed;

public:
    void getData()
    {
        getEmp();
        cout << "Enter typing speed: ";
        cin >> tSpeed;
    }
    void displayData()
    {
        displayEmp();
        cout << "Typing speed: " << tSpeed << endl;
    }
};

int main()
{
    Engineer e;
    Typist t;

    e.getData();
    t.getData();

    cout << "****Employee Details****" << endl;
    e.displayData();
    t.displayData();
    return 0;
}

/*
Output:

*/