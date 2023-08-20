/*
Array of objects
*/

#include <iostream>
using namespace std;

const int MAX = 100;

class Employee
{
private:
    int salary;
    int id;

public:
    void setdata()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id << "\tSalary: " << salary << endl;
    }
};

int main()
{
    Employee e[MAX];
    int n = 0;
    char ans;

    do
    {
        cout << "Employee number " << n + 1 << endl;
        e[n++].setdata();
        cout << "Do you want to add any more employees?[y/n] ";
        cin >> ans;
    } while (ans == 'y');

    for (int i = 0; i < n; i++)
    {
        e[i].display();
    }
    return 0;
}

/*
Output:
Employee number 1
Enter ID: 1000
Enter salary: 10000
Do you want to add any more employees?[y/n] y
Employee number 2
Enter ID: 1001
Enter salary: 15000
Do you want to add any more employees?[y/n] n
ID: 1000        Salary: 10000
ID: 1001        Salary: 15000
*/