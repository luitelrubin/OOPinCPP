/*
overloaded '+=' assignment operator
*/

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }

    void getdist()
    {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }

    void showdist()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    void operator+=(Distance);
};

void Distance::operator+=(Distance d)
{
    feet += d.feet;
    inches += d.inches;

    if (inches >= 12)
    {
        inches -= 12;
        feet++;
    }
}

int main()
{
    Distance d1, d2;

    d1.getdist();
    d2.getdist();

    cout << "D1 = ";
    d1.showdist();
    cout << "D2 = ";
    d2.showdist();
    cout << "After D1 += D2, D1 = ";
    d1 += d2;
    d1.showdist();
    return 0;
}

/*
Output:
Enter feet and inches: 3 11
Enter feet and inches: 4 2
D1 = 3 feet 11 inches
D2 = 4 feet 2 inches
After D1 += D2, D1 = 8 feet 1 inches
*/