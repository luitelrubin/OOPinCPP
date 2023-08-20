/*
Program showing destructor calling
*/

#include <iostream>
using namespace std;

class Test
{
    int x;
    int y;

public:
    Test()
    {
        x = 0;
        y = 0;
        cout << "Memory is allocated" << endl;
    }
    ~Test()
    {
        cout << "x = " << x << "\t"
             << "y = " << y << "\t" << endl;
        cout << "Memory is deallocated" << endl;
    }
};

int main()
{
    {
        Test p;
    } // lifetime of p ends here, and destructor is called
    return 0;
}

/*
Output:
Memory is allocated
x = 0   y = 0
Memory is deallocated
*/