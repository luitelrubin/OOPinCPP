/*
This pointer
*/

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char name[20];
    int age;

public:
    void setdata(char name[], int age)
    {
        // strcpy(this->name, name); // name conflict resolution
        strcpy(this->name, name);
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }

    Person isElder(Person p)
    {
        if (age > p.age)
            return *this; // returning invoking object
        else
            return p;
    }
};

int main()
{
    Person p, p1, p2;
    p1.setdata((char *)"Badman", 1);
    p2.setdata((char *)"Spearman", 2);
    p = p1.isElder(p2);
    cout << "The elder one is:" << endl;
    p.display();

    return 0;
}

/*
Output:
The elder one is:
Name: Spearman
Age: 2
*/