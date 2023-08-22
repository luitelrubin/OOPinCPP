/*
Overloading pre-increment operator
*/

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void operator++()
    {
        ++length;
        ++breadth;
    }

    void display()
    {
        cout << "Length = " << length << endl
             << "Breadth = " << breadth;
    }
};

int main()
{
    rectangle r1(12, 15);
    ++r1; // this is equivalent to ++r1.operator()
    r1.display();

    return 0;
}

/*
Output:
Length = 13
Breadth = 16
*/