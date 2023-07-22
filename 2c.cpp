// Program showing cascading of IO operations

#include <iostream>
using namespace std;

int main()
{
    int a, l, b;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    a = l * b;
    cout << "Area = " << a;
    return 0;
}

/*
Output:
Enter length and breadth of rectangle: 5 3
Area = 15
*/