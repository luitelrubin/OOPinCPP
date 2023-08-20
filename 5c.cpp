
/*
A complete program using class
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    void setdata(float l, float b);
    void displaydata();
    float getarea();
    float getperimeter();
};

void Rectangle::setdata(float l, float b)
{
    length = l;
    breadth = b;
}

void Rectangle::displaydata()
{
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
}

float Rectangle::getperimeter()
{
    return 2 * (length + breadth);
}

float Rectangle::getarea()
{
    return length * breadth;
}

int main()
{
    float perimeter, area;
    Rectangle r1;
    r1.setdata(13, 5);
    r1.displaydata();
    area = r1.getarea();
    perimeter = r1.getperimeter();

    cout << "Area: " << setprecision(4) << area << endl;
    cout << "Perimeter: " << setprecision(4) << perimeter << endl;
    return 0;
}

/*
Output:
Length: 13
Breadth: 5
Area: 65
Perimeter: 36
*/