/*
Goto loop example
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
loop:
    cout << n << ", ";
    n--;
    if (n > 0)
        goto loop;
    cout << "Fire!";
    return 0;
}

/*
Output:
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, Fire!
*/