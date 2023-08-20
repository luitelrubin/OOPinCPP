/*
Default values in functions
*/

#include <iostream>
using namespace std;

int divide(int a, int b = 2)
{
    int r;
    r = a / b;
    return (r);
}

int main()
{
    cout << "result of dividing 12 by def arg i.e. 2 = " << divide(12);
    cout << endl;
    cout << "result of dividing 12 by supplied arg i.e. 4 = " << divide(20, 4);

    return 0;
}

/*
Output:
result of dividing 12 by def arg i.e. 2 = 6
result of dividing 12 by supplied arg i.e. 4 = 5
*/