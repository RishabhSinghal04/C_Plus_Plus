
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned short nRows;

    cout << "Enter number of rows: ";
    cin >> nRows;

    for (int i = -nRows + 1; i <= nRows; ++i)
    {
        for (int j = 1; j <= nRows; ++j)
        {
            (abs(i) == j - 1) ? cout << "* " : cout << "  ";
        }
        cout << '\n';
    }

    getch();
    return 0;
}