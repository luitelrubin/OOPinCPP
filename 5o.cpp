/*
More on friend functions
*/

#include <iostream>
using namespace std;

class beta;
class alpha
{
private:
    int data;

public:
    void setdata(int d)
    {
        data = d;
    }
    friend int sum(alpha, beta);
};

class beta
{
private:
    int data;

public:
    void setdata(int d)
    {
        data = d;
    }
    friend int sum(alpha, beta);
};
int sum(alpha a, beta b)
{
    return a.data + b.data;
}

int main()
{
    alpha a;
    a.setdata(7);
    beta b;
    b.setdata(10);
    cout << "sum of Alphadata and Betadata: " << sum(a, b);
    return 0;
}

/*
Output:
sum of Alphadata and Betadata: 17
*/