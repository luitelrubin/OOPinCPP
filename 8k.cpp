/*
Ambuiguity in multiple inheritance and removal of ambiguity
*/

#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "This is class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "This is class B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C c;
    c.A::show(); // good
    c.B::show(); // good
    c.show();    // ambiguous
    return 0;
}

/*
Output:
error: request for member 'show' is ambiguous
*/