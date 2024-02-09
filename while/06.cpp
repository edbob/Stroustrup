#include "../std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string privios = " ";
    string current;
    while (cin >> current)
    {
        ++number_of_words;
        if (privios == current)
            cout << "Повторение слова " << current
                 << " После " << number_of_words
                 << " слово. " << '\n';
            privios = current;
    }

    return 0;
}