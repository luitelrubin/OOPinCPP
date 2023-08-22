/*
One user defined type to another user defined type converstion
This program converts from time24 to time12 using operator in time24
*/

#include <iostream>
#include <string>
using namespace std;

class time12
{
private:
    bool pm;
    int hrs;
    int mins;

public:
    time12() : pm(false), hrs(0), mins(0)
    {
    }

    time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
    {
    }

    void display() const
    {
        cout << hrs << ":";
        if (mins < 10)
        {
            cout << "0" << mins;
        }
        string am_pm = pm ? " p.m." : " a.m.";
        cout << am_pm;
    }
};
class time24
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    time24() : hours(0), minutes(0), seconds(0)
    {
    }

    time24(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {
    }

    void display() const
    {
        if (hours < 10)
            cout << "0";
        cout << hours << ":";
        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if (seconds < 10)
            cout << "0";
        cout << seconds << endl;
    }

    operator time12() const;
};

time24::operator time12() const
{
    int hrs24 = hours;
    bool pm = hrs24 < 12 ? false : true;

    int roundMins = seconds < 30 ? minutes : minutes + 1;

    if (roundMins == 60)
    {
        hrs24++;
        if (hrs24 == 12 || hrs24 == 24)
        {
            pm = (pm == true) ? false : true;
        }
    }
    int hrs12 = hrs24 < 13 ? hrs24 : hrs24 - 12;

    if (hrs12 == 0)
    {
        hrs12 = 12;
        pm = false;
    }

    return time12(pm, hrs12, roundMins);
}

int main()
{
    int h, m, s;
    while (true)
    { // get 24-hr time from user
        cout << "Enter 24 - hour time : \n";
        cout << "Hours(0 to 23) :";
        cin >> h;
        if (h > 23) // quit if hours > 23
            return (1);
        cout << "Minutes : ";
        cin >> m;
        cout << "Seconds : ";
        cin >> s;
        time24 t24(h, m, s);      // make a time24
        cout << "You entered : "; // display the time24
        t24.display();
        time12 t12 = t24;              // convert time24 to time12
        cout << "\n12 - hour time : "; // display equivalent time12
        t12.display();
        cout << "\n\n";
    }
    return 0;
}

/*
Output:

*/