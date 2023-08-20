/*
Address of and dereferencing operator
*/

#include <iostream>
using namespace std;

int main()
{
    int v = 20;
    int *p;

    p = &v;
    cout << "Value of v variable: " << v << endl;
    cout << "Address stored in p variable: " << p << endl;
    cout << "Value of *p variable: " << *p << endl;
    return 0;
}

/*
Output:
Value of v variable: 20
Address stored in p variable: 0x61ff08
Value of *p variable: 20
*/