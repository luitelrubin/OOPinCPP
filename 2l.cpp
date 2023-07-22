/*
Program using const modifier to define constant.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, r;
    const float PI = 3.1415; // Compiler catches error at this line
    cout << "Enter radius of a circle: ";
    cin >> r;
    a = PI * r * r;
    cout << "Area of circle: " << setprecision(4) << a << endl;

    return 0;
}

/*
Output:
Enter radius of a circle: 5
Area of circle: 78.54
*/