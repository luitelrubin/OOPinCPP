/*
Using namespaces
*/
#include <iostream>
#include <string.h>
using namespace std;

namespace digit
{
    int count = 0;
};

namespace character
{
    int count = 0;
};

namespace other
{
    int count = 0;
};

int main()
{
    char str[] = "1.Nepal 2.India 3.China";
    int i = 0;
    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
            digit::count++;
        else if (isalpha(str[i]))
            character::count++;
        else
            other::count++;
        i++;
    }
    cout << "Number of digits: " << digit::count << endl;
    cout << "Number of characters: " << character::count << endl;
    cout << "Number of other characters: " << other::count << endl;
    return 0;
}

/*
Output:
Number of digits: 3
Number of characters: 15
Number of other characters: 5
*/