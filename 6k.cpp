/*
Overloading comparison (less than) operator
*/

#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    void getdata()
    {
        cout << "Enter hour and minute: " << endl;
        cin >> hr >> min;
    }

    int operator<(Time t)
    {
        int ft, st;         // First time and second time
        ft = hr * 60 + min; // convert into minute
        st = t.hr * 60 + t.min;

        if (ft < st)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Time t1, t2;

    t1.getdata();
    t2.getdata();
    if (t1 < t2)
        cout << "T1 is less than t2" << endl;
    else
        cout << "T1 is greater than or equal to t2" << endl;
    return 0;
}

/*
Output:
Enter hour and minute:
5 30
Enter hour and minute:
4 00
T1 is greater than or equal to t2
*/