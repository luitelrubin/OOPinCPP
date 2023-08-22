/*
Order of execution of constructors
*/

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Class A constructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Class B constructor" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "Class C constructor" << endl;
    }
};
int main()
{
    C c1;
    return 0;
}

/*
Output:
Class A constructor
Class B constructor
Class C constructor
*/