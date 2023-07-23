/*
Program to generate fibonacci series between 1 to 100
*/

#include <iostream>
using namespace std;

int main()
{
    int num1 = 1, num2 = 1;
    cout << num1 << "\t";

    while (num2 <= 100)
    {
        cout << num2 << "\t";
        num2 += num1;
        num1 = num2 - num1;
    }
    return 0;
}

/*
Output:
1       1       2       3       5       8       13      21      34      55      89
*/