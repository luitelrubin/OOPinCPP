/*
Method Overriding
*/

#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Class B" << endl;
    }
};

int main()
{
    B b;
    b.show();    // invokes the member function from class B
    b.A::show(); // invokes the member function from class A
    return 0;
}

/*
Output:
Class B
Class A
*/