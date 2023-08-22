/*
Multiple inheritance
*/

#include <iostream>
using namespace std;

class Teacher
{
private:
    int tid;
    char subject[20];

public:
    void getTeacher()
    {
        cout << "Enter Teacher Id: ";
        cin >> tid;
        cout << "Enter Subject: ";
        cin >> subject;
        // getline(cin, subject);
    }

    void displayTeacher()
    {
        cout << "Teacher Id: " << tid << " Teaching subject: " << subject << endl;
    }
};
class Staff
{
private:
    int sid;
    char level[20];

public:
    void getStaff()
    {
        cout << "Enter Staff Id: ";
        cin >> sid;
        cout << "Enter Staff level: ";
        cin >> level;
        // getline(cin, level);
    }
    void displayStaff()
    {
        cout << "Staff Id: " << sid << " Level: " << level << endl;
    }
};
class Coordinator : public Teacher, public Staff
{
    char program[10];

public:
    void getData()
    {
        getTeacher();
        getStaff();
        cout << "Enter program: ";
        cin >> program;
    }

    void displayData()
    {
        displayTeacher();
        displayStaff();
        cout << "Program: " << program;
    }
};

int main()
{
    Coordinator c;
    c.getData();
    cout << "----Co-ordinator Details----" << endl;
    c.displayData();
    return 0;
}

/*
Output:
Enter Teacher Id: 1
Enter Subject: OOP
Enter Staff Id: 2
Enter Staff level: Teaching-associate
Enter program: Csit
----Co-ordinator Details----
Teacher Id: 1 Teaching subject: OOP
Staff Id: 2 Level: Teaching-associate
Program: Csit
*/