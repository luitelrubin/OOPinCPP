/*
Overloading negation operator
*/

#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    void getdata()
    {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    Point operator-()
    {
        Point t;
        t.x = -x;
        t.y = -y;
        return t;
    }
};

int main()
{
    Point p, q;
    p.getdata();
    q = -p;
    cout << "q = ";
    q.display();
    return 0;
}

/*
Output:
Enter x and y coordinates: 4 7
q = (-4, -7)
*/