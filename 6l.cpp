/*
String concatenation
*/

#include <iostream>
#include <cstring>

using namespace std;

class String
{
    char *s;
    int l; // length of string

public:
    void getdata()
    {
        char str[20];
        cout << "Enter a string: ";
        cin >> str;

        l = strlen(str);
        s = new char[l + 1];
        strcpy(s, str);
    }

    void display()
    {
        cout << s;
    }

    String operator+(String x)
    {
        String temp;
        temp.s = new char[l + x.l + 1];
        strcpy(temp.s, s);
        strcat(temp.s, x.s);
        return temp;
    }
};

int main()
{
    String s1, s2, s3;

    s1.getdata();
    s2.getdata();

    s3 = s1 + s2;

    s1.display();
    cout << " + ";
    s2.display();
    cout << " = ";
    s3.display();

    return 0;
}

/*
Output:
Enter a string: Hand
Enter a string: Sanitizer
Hand + Sanitizer = HandSanitizer
*/