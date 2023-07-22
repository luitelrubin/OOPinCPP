/*
Program showing variable declaration in different places
*/

#include <iostream>
using namespace std;

int main()
{
    float x; // declaration
    float sum = 0;

    for (int i = 0; i < 5; i++) // declaration
    {
        cout << "Enter number: ";
        cin >> x;
        sum += x;
    }
    float average; // declaration
    average = sum / 5;
    cout << "Average = " << average;
    return 0;
}

/*
Output:
Enter number: 2
Enter number: 2
Enter number: 6
Enter number: 9
Enter number: 9
Average = 5.6
*/