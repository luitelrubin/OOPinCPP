/*
Showing use of scope resolution operator
*/

#include <iostream>
using namespace std;

int count = 0;
int main()
{
    int count = 0;
    ::count = 1; // set global count to 1
    cout << "Global count = " << ::count << endl;
    count = 2; // set local count to 2
    cout << "Local count = " << count;
    return 0;
}

/*
Output:
Global count = 1
Local count = 2
*/