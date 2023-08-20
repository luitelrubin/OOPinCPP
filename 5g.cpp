/*
Nesting of member functions
(Or is it?)
*/

#include <iostream>
using namespace std;

class Total
{
private:
    float principle, time, rate;
    float findinterest()
    {
        return principle * time * rate / 100;
    }

public:
    void setdata(float p, float t, float r)
    {
        principle = p;
        time = t;
        rate = r;
    }

    float findtotal()
    {
        return principle + findinterest();
    }
};

int main()
{
    float p, t, r, a;
    Total ta;
    cout << "Enter values for p, t, r" << endl;
    cin >> p >> t >> r;
    ta.setdata(p, t, r);
    a = ta.findtotal();

    cout << "Total amount = " << a << endl;
    return 0;
}

/*
Output:
Enter values for p, t, r
1000 1 10
Total amount = 1100
*/