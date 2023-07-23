/*
Program to identify the days of the week
*/

#include <iostream>
using namespace std;

int main()
{
    int d;
    cout << "Enter day of the week: ";
    cin >> d;

    switch (d)
    {
    case 1:
        cout << "The day is Sunday.";
        break;
    case 2:
        cout << "The day is Monday.";
        break;
    case 3:
        cout << "The day is Tuesday.";
        break;
    case 4:
        cout << "The day is Wednesday.";
        break;
    case 5:
        cout << "The day is Thursday.";
        break;
    case 6:
        cout << "The day is Friday.";
        break;
    case 7:
        cout << "The day is Saturday.";
        break;
    default:
        cout << "Please enter a number between 1 and 7";
    }
    return 0;
}

/*
Output:
Enter day of the week: 4
The day is Wednesday.
*/