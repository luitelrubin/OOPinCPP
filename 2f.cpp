// Use of reference variable

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a = 2;
    int b = a;
    cout << "Normal Variable" << endl;
    cout << "a = " << a << "\tb = " << b << endl;
    b = b + 5;
    cout << "a = " << a << "\tb = " << b << endl;

    // When b is changed, the value of a remains unchanged because "a" and "b" point to different memory locations.

    // Expriment with reference variables

    int x = 3;
    int &y = x;

    cout << "Reference Variable" << endl;
    cout << "x = " << x << "\ty = " << y << endl;
    y = y + 5;
    cout << "x = " << x << "\ty = " << y << endl;

    // When "y" is changed, the value of "x" remanins unchanged because "x" and "y" point to same memory location
    return 0;
    getch();
}

/*
Output:
Normal Variable
a = 2   b = 2
a = 2   b = 7
Reference Variable
x = 3   y = 3
x = 8   y = 8
*/