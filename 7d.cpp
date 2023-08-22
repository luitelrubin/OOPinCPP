/*
Multilevel inheritance
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void getStudent()
    {
        cout << "Enter roll number and name of a student: ";
        cin >> roll >> name;
    }

    void displayStudent()
    {
        cout << "Roll no.: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student
{
private:
    int sub1, sub2, sub3;

public:
    void getMarks()
    {
        cout << "Enter marks for three subjects: ";
        cin >> sub1 >> sub2 >> sub3;
    }

    void displayMarks()
    {
        cout << "sub 1: " << sub1 << endl;
        cout << "sub 2: " << sub2 << endl;
        cout << "sub 3: " << sub3 << endl;
    }

    int totalMarks()
    {
        return sub1 + sub2 + sub3;
    }
};

class Results : public Marks
{
    float total, percentage;

public:
    void getdata()
    {
        getStudent();
        getMarks();
    }

    void displayData()
    {
        displayStudent();
        displayMarks();
        total = totalMarks();
        percentage = total / 3;

        cout << "Total: " << total << endl;
        cout << "Percentage: " << setprecision(4) << percentage << endl;
    }
};

int main()
{
    Results r1;

    r1.getdata();

    cout << "****Results****" << endl;

    r1.displayData();

    return 0;
}

/*
Output:
Enter roll number and name of a student: 19 Superman
Enter marks for three subjects: 20 40 60
****Results****
Roll no.: 19
Name: Superman
sub 1: 20
sub 2: 40
sub 3: 60
Total: 120
Percentage: 40
*/