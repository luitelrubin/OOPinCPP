/*
Dynamic Constructor
*/

#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *name;
    int length;

public:
    String();
    String(char *s);
    void display();
    void join(String &a, String &b);
};

String::String()
{
    length = 0;
    name = new char[length = 1];
}

String::String(char *s)
{
    length = strlen(s);
    name = new char[length + 1];
    strcpy(name, s);
}

void String::display()
{
    cout << "Name: " << name;
}

void String::join(String &a, String &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length + 1];
    strcpy(name, a.name);
    strcat(name, " ");
    strcat(name, b.name);
}

int main()
{
    String fn((char *)"Humpty");
    String ln((char *)"Dumpty");
    String n;

    n.join(fn, ln);
    n.display();
    return 0;
}

/*
Output:
Name: Safal Handsome
*/