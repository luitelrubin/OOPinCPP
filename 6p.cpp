/*
Conversion from user defined type to basic type
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    void showdistusual()
    {
        cout << feet << " feet, " << inches << " inches";
    }

    operator float()
    {
        float retval = feet + inches / 12;
        return (retval);
    }
};

int main()
{
    Distance d1(5, 11);
    float newval = float(d1);
    cout << "Feet and inches in decimal = " << setprecision(3) << newval;
    return 0;
}

/*
Output:
Feet and inches in decimal = 5.92
*/