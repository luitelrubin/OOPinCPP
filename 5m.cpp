/*
Constant member variables
*/

#include <iostream>
using namespace std;

class Fred
{
    const int size;

public:
    Fred(int sz) : size(sz)
    {
    }

    void display()
    {
        cout << size << endl;
    }
};

int main()
{
    Fred a(1), b(2), c(3);
    a.display(), b.display(), c.display();
    return 0;
}

/*
Output:
1
2
3
*/