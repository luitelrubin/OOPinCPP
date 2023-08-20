/*
Program for counting number of objects
*/
#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    char name[20];
    static int count; // static data member

public:
    void setdata()
    {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
        count++;
    }
    void displayCount()
    {
        cout << "Count: " << count << endl;
    }
};

int Student::count = 0; // Assignment of value to a static data member
int main()
{
    Student s1, s2, s3;
    s1.displayCount();
    s2.displayCount();
    s3.displayCount();
    s1.setdata();
    s2.setdata();
    s3.setdata();
    s1.displayCount();
    s2.displayCount();
    s3.displayCount();
    return 0;
}

/*
Output:
Count: 0
Count: 0
Count: 0
Enter roll and name: 1 Rubin
Enter roll and name: 2 Rubin2
Enter roll and name: 3 Rubin3
Count: 3
Count: 3
Count: 3
*/