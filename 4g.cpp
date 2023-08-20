/*
Function overloading with different type of arguments
*/

#include <iostream>
#include <iomanip>
using namespace std;

int mul(int a, int b)
{
    return (a * b);
}

float mul(float a, float b)
{
    return (a * b);
}
int main()
{
    int x = 5, y = 2;
    float n = 7.39658, m = 3.55;

    cout << "Products of integers: " << mul(x, y);
    cout << endl;
    cout << "Product of reals: " << setprecision(4) << mul(n, m);
    cout << endl;

    return 0;
}

/*
Output:
Products of integers: 10
Product of reals: 26.26
*/