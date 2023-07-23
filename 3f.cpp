/*
Break loop example
*/

#include <iostream>
using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";

        if (n == 3)
        {
            cout << "Countdown aborted!";
            break;
        }
    }
    return 0;
}

/*
Output:
10, 9, 8, 7, 6, 5, 4, 3, Countdown aborted!
*/