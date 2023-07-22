/*
Program to allocate and destroy memory dynamically
*/

#include <iostream>
#include <new>
// #include
using namespace std;
int main()
{
    int *p, i;

    try
    {
        p = new int[10]; // allocate 10 integer array
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failure\n";
        return 1;
    }

    for (i = 0; i < 10; i++)
        p[i] = i;

    for (i = 0; i < 10; i++)
        cout << p[i] << " ";

    delete[] p; // release the array
    return 0;
}

/*
Output:
0 1 2 3 4 5 6 7 8 9
*/