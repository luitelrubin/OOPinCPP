/*
Overloading increment operator using friend function
*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    friend void operator++(Rectangle &);

    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "-----" << endl;
    }
};

void operator++(Rectangle &rect)
{
    ++rect.length;
    ++rect.breadth;
}

int main()
{
    Rectangle r1(12, 15);
    r1.display(); // before incrementing
    ++r1;
    r1.display(); // after incrementing
    return 0;
}

/*
Output:
Length = 12
Breadth = 15
-----
Length = 13
Breadth = 16
-----
*/