/*
Overloading plus operator
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    void getdata()
    {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }

    Distance operator+(Distance d)
    {
        Distance d3;
        d3.feet = feet + d.feet;
        d3.inches = inches + d.inches;
        d3.feet = d3.feet + (d3.inches / 12);
        d3.inches = d3.inches % 12;
        return d3;
    }

    void display()
    {
        cout << "Feet: " << feet << ", Inches: " << inches;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.getdata();
    d2.getdata();

    d3 = d1 + d2;
    // or use d3 = d1.operator+(d2);
    cout << "D1 = ";
    d1.display();
    cout << endl;
    cout << "D2 = ";
    d2.display();
    cout << endl;
    cout << "D3 = "; // sum of d1 and d2
    d3.display();
    return 0;
}

/*
Output:
Enter feet and inches: 15 11
Enter feet and inches: 14 1
D1 = Feet: 15, Inches: 11
D2 = Feet: 14, Inches: 1
D3 = Feet: 30, Inches: 0
*/