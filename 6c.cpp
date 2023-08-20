/*
Constructor with default arguments
*/

#include <iostream>
using namespace std;

class interest
{
    int principal, rate, year;
    float amount;

public:
    interest(int p, int n, int r = 10);
    void cal(void);
};

interest::interest(int p, int n, int r)
{
    principal = p;
    year = n;
    rate = r;
}

void interest::cal(void)
{
    cout << "Principal = " << principal << endl;
    cout << "Rate = " << rate << endl;
    cout << "Year = " << year << endl;
    amount = principal + (float)(principal * year * rate) / 100;
    cout << "Amount = " << amount << endl;
    cout << "--------------------" << endl;
}
int main()
{
    interest i1(1000, 2);
    interest i2(1000, 2, 15);
    i1.cal();
    i2.cal();

    return 0;
}

/*
Principal = 1000
Rate = 10
Year = 2
Amount = 1200
--------------------
Principal = 1000
Rate = 15
Year = 2
Amount = 1300
--------------------
*/