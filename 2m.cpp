/*
Program illustrating the use of enumeration.
*/

#include <iostream>
using namespace std;

enum Days
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    enum Days today = Monday;
    switch (today)
    {
    case 2:
        cout << "It's Monday." << endl;
        break;
    default:
        cout << "Not Monday" << endl;
    }

    return 0;
}

/*
Output:
It's Monday.
*/