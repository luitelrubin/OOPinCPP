/*
Single inheritance
*/

#include <iostream>
using namespace std;

class Student
{
    char *name;
    int age;

public:
    Student(char *n, int a) : name(n), age(a) {}

    char *getName()
    {
        return name;
    }

    void display()
    {
        cout << "Name:: " << name << endl;
        cout << "Age:: " << age << endl;
    }
};

class ForeignStudent : public Student
{
    char *country;

public:
    ForeignStudent(char *n, int a, char *c) : Student(n, a), country(c) {}

    void displayForeign()
    {
        display();
        cout << "Country:: " << country << endl;
    }
};

int main()
{
    ForeignStudent fs("Mark", 21, "UK");
    fs.displayForeign();
    cout << fs.getName();
    return 0;
}

/*
Output:
Name:: Mark
Age:: 21
Country:: UK
*/