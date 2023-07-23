/*
Continue loop example
*/

#include <iostream>
using namespace std;

int main()
{
    for (int n = 0; n < 6; ++n)
    {
        cout << "n = " << n;
        if (n % 2 == 1)
        {
            cout << endl;
            continue;
        }
        cout << "\tThis is even" << endl;
    }
    return 0;
}

/*
Output:
n = 0   This is even
n = 1
n = 2   This is even
n = 3
n = 4   This is even
n = 5
*/