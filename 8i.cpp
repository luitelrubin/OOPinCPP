/*
Order of execution of destructors
*/

#include <iostream>
using namespace std;

class A
{
public:
    ~A()
    {
        cout << "Class A destructor" << endl;
    }
};

class B : public A
{
public:
    ~B()
    {
        cout << "Class B destructor" << endl;
    }
};

class C : public B
{
public:
    ~C()
    {
        cout << "Class C destructor" << endl;
    }
};
int main()
{
    {
        C c1;
    } // Destructor is called here
    return 0;
}

/*
Output:
Class C destructor
Class B destructor
Class A destructor
*/