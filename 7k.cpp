/*
Conversion from basic type to user defined type
*/

#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(float decimalval)
    {
        feet = int(decimalval);
        inches = (decimalval - feet) * 12;
    }

    void showdist()
    {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1(3.7);
    d1.showdist();
    return 0;
}

/*
Output:
3 feet, 8 inches
*/