#include "../std_lib_facilities.h"

int main()
{
    cout << "ведите любую цыфру: \n";
    char a;
    while (cin >> a)
    {
        /* code */
        switch (a)
        {
        case '0':
        case '2':
        case '4':
        case '8':
            cout << a << " четное!\n";
            break;
        case '1':
        case '3':
        case '7':
            cout << a << " не четное!\n";
            break;
        default:
            cout << "что то пошло не так!\n";
            break;
        }
    }
    return 0;
}