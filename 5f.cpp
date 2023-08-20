/*
Access specifiers and their visibility
*/

#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    int y;

    void setdata()
    {
        cout << "Enter values for x and y: " << endl;
        cin >> x >> y;
    }

    void display()
    {
        cout << "x = " << x << "y = " << y;
    }
};
int main()
{
    Test p;
    p.setdata();
    cout << "Enter a value for x: ";
    cin >> p.x; // generates error
    cout << "Enter a value for y: ";
    cin >> p.y; // No error
    return 0;
}

/*
Output:
     cin >> p.x; // generates error
              ^
5f.cpp:11:9: note: declared private here
     int x;
         ^
*/