/*
Using structures
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct currency
{
    int rupees = 0;
    float paisa = 0;
}; // currency is the name for struct currency

int main()
{
    currency c1, c2, c3;

    cout << "Enter Rupees: ";
    cin >> c1.rupees;
    cout << "Enter Paisa: ";
    cin >> c1.paisa;

    cout << "Enter Rupees: ";
    cin >> c2.rupees;
    cout << "Enter Paisa: ";
    cin >> c2.paisa;

    c3.paisa = c1.paisa + c2.paisa;

    if (c3.paisa >= 100)
    {
        c3.paisa -= 100;
        c3.rupees++;
    }

    c3.rupees += c2.rupees + c1.rupees;
    cout << "Rs." << c1.rupees << " Ps." << setprecision(4) << c1.paisa << " + ";
    cout << "Rs." << c2.rupees << " Ps." << setprecision(4) << c2.paisa << " = ";
    cout << "Rs." << c3.rupees << " Ps." << setprecision(4) << c3.paisa << endl;
    return 0;
}

/*
Output:
Enter Rupees: 50
Enter Paisa: 44.612
Rs.50 Ps.44.61 + Rs.123 Ps.56.4 = Rs.174 Ps.1.012
*/