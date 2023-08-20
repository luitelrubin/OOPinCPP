/*
Inline Function
*/

#include <iostream>
using namespace std;

inline void sum(int a, int b)
{
    int s;
    s = a + b;
    cout << "Sum = " << s << endl;
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    sum(x, y);
    return 0;
}

/*
Output:
Enter two numbers: 3 4
Sum = 7
*/