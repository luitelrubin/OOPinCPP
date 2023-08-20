/*
Constructor Overloading
*/

#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int code;
    int price;

    string dashgen(int n = 10)
    {
        char dash = '-';
        string dashes;

        for (int i = 0; i < n; i++)
        {
            dashes += dash;
        }

        return dashes;
    }

public:
    Item()
    {
        code = 0;
        price = 0;
    }

    Item(int c, int p)
    {
        code = c;
        price = p;
    }

    Item(Item &o)
    {
        code = o.code;
        price = o.price;
    }

    void display()
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
        cout << dashgen() << endl;
    }
};

int main()
{
    Item i1;
    Item i2(102, 300);
    Item i3(i2);

    i1.display();
    i2.display();
    i3.display();

    return 0;
}

/*
Output:
Code: 0
Price: 0
----------
Code: 102
Price: 300
----------
Code: 102
Price: 300
----------
*/