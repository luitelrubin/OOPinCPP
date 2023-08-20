/*
One user defined type to another user defined type converstion
converts from time24 to time12 using constructor in time12
*/

#include <iostream>
using namespace std;
class time24
{
    int hours;
    int minutes;
    int seconds;

public:
    time24() : hours(0), minutes(0), seconds(0) {}
    time24(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void gettime()
    {
        cout << "Enter hours (00 to 23): ";
        cin >> hours;
        cout << "Enter minutes (00 to 59): ";
        cin >> minutes;
        cout << "Enter seconds (00 to 59): ";
        cin >> seconds;
    }

    void showtime()
    {
        if (hours < 10)
            cout << "0";
        cout << hours << ":";
        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if (seconds < 10)
            cout << "0";
        cout << seconds;
    }

    int gethours() { return hours; }
    int getminutes() { return minutes; }
    int getseconds() { return seconds; }
};
class time12
{
private:
    int hrs;
    int mins;
    bool pm;

public:
    time12() : hrs(0), mins(0), pm(false) {}

    time12(int h, int m, bool p) : hrs(h), mins(m), pm(p) {}

    time12(time24);

    void gettime()
    {
        cout << "Enter hours: ";
        cin >> hrs;
        cout << "Enter minutes: ";
        cin >> mins;
        cout << "Enter 1 for pm 0 for am: ";
        cin >> pm;
    }
    void showtime()
    {
        if (hrs < 10)
            cout << "0";
        cout << hrs << ":";
        if (mins < 10)
            cout << "0";
        cout << mins << " ";
        cout << (pm ? "pm" : "am");
    }
};
time12::time12(time24 t24)
{
    int hrs24 = t24.gethours();
    // find am_pm
    pm = (hrs24 < 12 ? false : true);
    // round seconds
    mins = (t24.getseconds() < 30 ? t24.getminutes() : t24.getminutes() + 1);

    if (mins == 60)
    {
        ++hrs24;
        mins = 0;
        if (hrs24 == 12 || hrs24 == 24)
            pm = (pm == true) ? false : true; // toggle pm
    }
    hrs = (hrs24 < 12 ? hrs24 : hrs24 - 12);

    if (hrs == 0)
    {
        hrs = 12;
        pm = false;
    }
}

int main()
{
    time24 t24;
    t24.gettime();
    cout << "You entered: ";
    t24.showtime();
    cout << endl;
    cout << "When converted into 12 hour format the time becomes: ";
    time12 t12(t24);
    t12.showtime();
}

/*
Output:
Enter hours (00 to 23): 23
Enter minutes (00 to 59): 59
Enter seconds (00 to 59): 59
You entered: 23:59:59
When converted into 12 hour format the time becomes: 12:00 am
*/