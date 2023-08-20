/*
Friend function
*/

#include <iostream>
using namespace std;

class Sample
{
    int a;
    int b;

public:
    void setvalue()
    {
        a = 25;
        b = 40;
    }
    friend float mean(Sample s);
};

float mean(Sample s)
{
    return float(s.a + s.b) / 2;
}
int main()
{
    Sample x;
    x.setvalue();
    cout << "Mean value: " << mean(x);

    return 0;
}

/*
Output:
Mean value: 32.5
*/