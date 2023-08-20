/*
Pass by reference
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 3;
    swap(x, y);
    cout << "After function call" << endl;
    cout << "x = " << x << endl
         << "y = " << y << endl;

    return 0;
}

/*
Output:
After function call
x = 3
y = 5
*/