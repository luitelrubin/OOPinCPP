/*
Program to overload assignment operator
*/

#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    enum
    {
        SZ = 80
    };
    char str[SZ];

public:
    String()
    {
        strcpy(str, " ");
    }

    String(char s[])
    {
        strcpy(str, s);
    }

    void display() const
    {
        cout << str;
    }

    void getstr()
    {
        cin.get(str, SZ);
    }

    bool operator==(String ss) const // check for equality
    {
        return !strcmp(str, ss.str);
    }
};

int main()
{
    String s1 = (char *)"yes";
    String s2 = (char *)"no";
    String s3;
    {
        cout << "\nEnter 'yes' or 'no': ";
        s3.getstr();

        if (s3 == s1)
        {
            cout << "You typed yes\n";
        }
        else if (s3 == s2)
        {
            cout << "You typed no\n";
        }
        else
            cout << "You didn't follow instructions :(\n ";
    }
    return 0;
}

/*
Output:
Run 1
Enter 'yes' or 'no': yes
You typed yes
Run 2
Enter 'yes' or 'no': no
You typed no
Run 3
Enter 'yes' or 'no': whatever
You didn't follow instructions :(
*/