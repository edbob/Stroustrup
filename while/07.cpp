#include "../std_lib_facilities.h"

int main()
{
    string previos = " ";
    string current;
    while (cin >> current)
    {
        /* code */
        if (previos == current)
            cout << "Повторяющее слово: " << current << '\n';
            previos = current;
    }
    
    return 0;
}