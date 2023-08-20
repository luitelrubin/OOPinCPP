/*
Overloading functions with different number of arguments
*/

#include <iostream>
using namespace std;

int area(int l, int b)
{
    return l * b;
}

int area(int l)
{
    return l * l;
}

int main()
{
    int sa, ra, l, b;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    ra = area(l, b);
    cout << "Enter length of a side of a square: ";
    cin >> l;
    sa = area(l);
    cout << "Area of Rectangle = " << ra << endl;
    cout << "Area of Square = " << sa << endl;

    return 0;
}

/*
Output:
Enter length and breadth of rectangle: 15 5
Enter length of a side of a square: 5
Area of Rectangle = 75
Area of Square = 25
*/