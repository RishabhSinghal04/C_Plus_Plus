
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    using ushort = unsigned short;
    const ushort WORDLENGTH = word.length();

    for (ushort i = 1; i <= WORDLENGTH; ++i)
    {
        for (ushort j = 1; j <= WORDLENGTH; ++j)
        {
            (j >= i) ? cout << word[j - i] << ' ' : cout << "  ";
        }
        cout << '\n';
    }

    getch();
    return 0;
}