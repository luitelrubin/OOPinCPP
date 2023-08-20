/*
Friend class
*/

#include <iostream>
using namespace std;

class alpha
{
private:
    int data;

public:
    void setdata(int d)
    {
        data = d;
    }
    friend class beta;
};

class beta
{
public:
    void funct(alpha a)
    {
        cout << "Alphadata: " << a.data << endl;
    }
};
int main()
{
    alpha a;
    a.setdata(69);
    beta b;
    b.funct(a);
    return 0;
}

/*
Output:
Alphadata: 69
*/