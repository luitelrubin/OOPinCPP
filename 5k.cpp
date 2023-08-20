/*
Modification of static method for displaying count
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
        cout << "Enter roll number and name: ";
        cin >> roll >> name;
        count++;
    }

    static void displayCount()
    {
        cout << "count: " << count << endl;
    }
};
int Student::count = 0;
int main()
{
    Student s1, s2, s3;
    Student::displayCount();
    s1.setdata();
    s2.setdata();
    s3.setdata();
    Student::displayCount();
    return 0;
}

/*
Output:
count: 0
Enter roll number and name: 1 Binone
Enter roll number and name: 2 Bintwo
Enter roll number and name: 3 Binthree
count: 3
*/