// Program to read marks of 5 subjects and display them such that all subject names should be displayed left justified and marks should be displayed right justified. Also display total and percentage up to the precision 2.

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int main()
{
    int total = 150;
    int marks[5];
    char sub[5][15] = {"English", "Nepali", "Maths", "Science", "Comp Science"};
    char dash = '-';

    cout << "Enter marks for English, Nepali, Maths, Science and Computer Science: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    cout << "Subjects" << setw(25 - strlen("Subjects")) << "Marks" << endl;
    cout << "-------------------------" << endl;

    int aggregate = 0; // total obtained marks
    float percentage = 0;
    for (int i = 0; i < 5; i++)
    {
        aggregate += marks[i];
        cout << sub[i] << setw(25 - strlen(sub[i])) << marks[i] << endl;
    }

    percentage = (aggregate * 100 / 150);

    cout << "Total: " << setw(25 - strlen("Total: ")) << aggregate << endl;
    cout << "Percentage: " << setw(25 - strlen("Percentage: ")) << percentage << "%" << endl;
    return 0;
}
/*
Output:
Enter marks for English, Nepali, Maths, Science and Computer Science: 30 29 27 25 28
Subjects            Marks
-------------------------
English                30
Nepali                 29
Maths                  27
Science                25
Comp Science           28
Total:                139
Percentage:            92%
*/