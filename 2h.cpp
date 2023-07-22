/*
Program to get fractional result from division of two integers.
*/
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
// #include

int main()
{
    int x, y;
    float z;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    z = z / y;
    cout << "Result of division without casting: " << setprecision(2) << z << endl;

    // to get the fractional result, one of the operands involved in division shoult be converted to float type

    z = float(x) / y;
    cout << "Result of division with casting: " << setprecision(2) << z << endl;
    getch();
    return 0;
}

/*
Output:
Enter two numbers: 9 7
Result of division without casting: 8.4e-040
Result of division with casting: 1.3
*/