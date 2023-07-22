// cin wih strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;
    cout << "What is your name? ";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favourite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}

/*
Output:
What is your name? Rubin
Hello Rubin.
What is your favourite team? Chelsea
I like Chelsea too!
*/