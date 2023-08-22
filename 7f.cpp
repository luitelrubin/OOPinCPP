/*
Overloading binary operator using friend function
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    friend Distance operator+(Distance, Distance);

    void display()
    {
        cout << "Feet:" << feet << ", Inches: " << inches << endl;
    }
};
Distance operator+(Distance d1, Distance d2)
{
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    d3.feet += d3.inches / 12;
    d3.inches = d3.inches % 12;
    return d3;
}
int main()
{
    Distance d1(12, 23);
    Distance d2(17, 1);
    Distance d3;
    d3 = d1 + d2;

    cout << "D1 = ";
    d1.display();
    cout << endl;
    cout << "D2 = ";
    d2.display();
    cout << endl;
    cout << "D3 = ";
    d3.display();
    cout << endl;

    return 0;
}

/*
Output:
D1 = Feet:12, Inches: 23

D2 = Feet:17, Inches: 1

D3 = Feet:31, Inches: 0
*/