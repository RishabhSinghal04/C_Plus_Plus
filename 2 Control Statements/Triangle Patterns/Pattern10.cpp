
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned short nRows, term = 0;
    const unsigned short width = 4;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = 1; i <= nRows; ++i)
    {
        term = i;
        for (int j = 1; j <= i; ++j)
        {
            cout << setw(width) << term;
            term += nRows - j;
        }
        cout << '\n';
    }

    getch();
    return 0;
}