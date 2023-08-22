/*
Virtual Base Class
*/

#include <iostream>
using namespace std;

class Person
{
protected:
    char name[20];
    int age;

public:
    void getdata()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : virtual public Person
{
protected:
    int eid, salary;

public:
    void getdata()
    {
        cout << "Enter Employee Id and salary: ";
        cin >> eid >> salary;
    }

    void display()
    {
        cout << "Eid: " << eid << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Student : public virtual Person
{
protected:
    int sid;
    char faculty[20];

public:
    void getdata()
    {
        cout << "Enter student ID and faculty: ";
        cin >> sid >> faculty;
    }

    void display()
    {
        cout << "Student Id: " << sid << endl;
        cout << "Faculty: " << faculty << endl;
    }
};

class TeachingAssistant : public Employee, public Student
{
    char course[20];

public:
    void getdata()
    {
        Person::getdata();
        Employee::getdata();
        Student::getdata();
        cout << "Enter course: ";
        cin >> course;
    }

    void displaydata()
    {
        Person::display();
        Employee::display();
        Student::display();
        cout << "Course: " << course;
    }
};

int main()
{
    TeachingAssistant ta;
    ta.getdata();
    cout << "*****TA details*****" << endl;
    ta.displaydata();
}

/*
Output:
Enter name and age: Superman 21
Enter Employee Id and salary: 007 100000
Enter student ID and faculty: 007 IOST
Enter course: CSIT
*****TA details*****
Name: Superman
Age: 21
Eid: 7
Salary: 100000
Student Id: 7
Faculty: IOST
Course: CSIT
*/