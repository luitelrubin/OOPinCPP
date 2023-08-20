/*
Program showing limitation of macro
*/

#include <iostream>
using namespace std;
#define mul(a, b) a *b
int main()
{
    int result;
    result = mul(2 + 4, 5);
    cout << "Macro will be expanded as 2 + 4 * 5 i.e.: " << result << endl;
    return 0;
}

/*
Output:
Macro will be expanded as 2 + 4 * 5 i.e.: 22
*/