/*
Multilevel inheritance by using protected access specifier
*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Student
{
private:
    int roll;
    char *name;

public:
    Student() : roll(-1), name(NULL) {}
    Student(char *n, int r)
    {
        name = new char[strlen(n) + 1];
        name = n;
        roll = r;
    }

    void displayStudent()
    {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll << endl;
    }
};

class Marks : public Student
{
protected:
    int sub1, sub2, sub3;

public:
    Marks() : sub1(0), sub2(0), sub3(0) {}
    Marks(char *n, int r, int s1, int s2, int s3) : Student(n, r), sub1(s1), sub2(s2), sub3(s3) {}
    void displayMarks()
    {
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl;
    }
};

class Result : public Marks
{
private:
    int total;
    float percentage;

public:
    Result() : total(0), percentage(0) {}
    Result(char *n, int r, int s1, int s2, int s3) : Marks(n, r, s1, s2, s3), total(s1 + s2 + s3), percentage(float(total) / 3) {}

    void displayResult()
    {
        displayStudent();
        displayMarks();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << setprecision(4) << percentage << endl;
    }
};

int main()
{
    Result r1("Rohit", 1, 80, 87, 92);
    cout << "*****Result Details*****" << endl;
    r1.displayResult();
    return 0;
}

/*
Output:
*****Result Details*****
Name: Rohit
Roll no: 1
Subject 1: 80
Subject 2: 87
Subject 3: 92
Total Marks: 259
Percentage: 86.33
*/