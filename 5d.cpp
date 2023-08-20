/*
Pointer to classes
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
string gendashes(int);
class Item
{
    int code, price;

public:
    void getdata()
    {
        cout << "Enter code and price: ";
        cin >> code >> price;
    }

    void display()
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};
string gendashes(int num)
{
    string str = "";
    for (int i = 0; i < num; i++)
        str += '-';
    return str;
}
int main()
{
    Item *a = new Item();
    Item b;

    a->getdata();
    b.getdata();

    cout << gendashes(9) << "Item Details" << gendashes(9) << endl;
    cout << "First Item: ";
    a->display();
    cout << "Second Item: ";
    b.display();
    return 0;
}

/*
Output:
Enter code and price: 123 500
Enter code and price: 456 1000
---------Item Details---------
First Item: Code: 123
Price: 500
Second Item: Code: 456
Price: 1000
*/