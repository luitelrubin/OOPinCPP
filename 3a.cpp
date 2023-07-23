/*
Program to calculate tax and net salary from gorss salary.
*/

#include <iostream>
using namespace std;

int main()
{
    float gross, net, tax;
    cout << "Enter Gross Salary: ";
    cin >> gross;

    if (gross > 40000)
        tax = gross * 0.2;
    else if (gross > 30000)
        tax = gross * 0.15;
    else if (gross > 20000)
        tax = gross * 0.1;
    else
        tax = 0;

    net = gross - tax;
    cout << "Tax = " << tax << endl;
    cout << "Net Salary = " << net << endl;
    return 0;
}

/*
Output:
Enter Gross Salary: 50000
Tax = 10000
Net Salary = 40000
*/