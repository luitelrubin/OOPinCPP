/*
Derived class constructor
*/

#include <iostream>
using namespace std;

class A
{
protected:
    int adata;

public:
    A(int a) : adata(a) {}
};

class B : public A
{
private:
    int bdata;

public:
    B(int a, int b) : A(a), bdata(b) {}
    void showdata()
    {
        cout << "adata = " << adata << ", bdata = " << bdata << endl;
    }
};

int main()
{
    B b1(12, 14);
    b1.showdata();
    return 0;
}

/*
Output:
adata = 12, bdata = 14
*/