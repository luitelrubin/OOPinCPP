/*
Program using define to define a constant
*/

#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.1415 // compiler cannot catch error at this line

int main()
{
    float a, r;
    cout << "Enter radius of a circle: ";
    cin >> r;
    a = PI * r * r;
    cout << "Area of the circle: " << setprecision(4) << a << endl;

    return 0;
}

/*
Output:
Enter radius of a circle: 5
Area of the circle: 78.54
*/