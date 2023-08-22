/*
Program to different access specifiers result in different visibility
*/
#include <iostream>
using namespace std;

class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class Derived : public Base
{
public:
    void getdata()
    {
        cout << "Enter a value for x, y and z: ";
        cin >> y >> z; // this is allowed
        cin >> x;      // this generates an error
    }
};

int main()
{
    Derived d;
    d.getdata();
    return 0;
}

/*
Output:
error: 'int Base::x' is private within this context
*/