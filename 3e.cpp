/*
Program to calculate reverse of a number
*/

#include <iostream>
using namespace std;

int main()
{
    int num, rem, rev = 0;

    cout << "Enter a number to find its reverse: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << "The reversed number is: " << rev;
    return 0;
}

/*
Output:
Enter a number to find its reverse: 854
The reversed number is: 458
*/