#include "../std_lib_facilities.h"

int main()
{
    cout << "Вы любите рыбу: да(1) или нет(2)?" << '\n';
    int s;
    cin >> s;
    switch (s)
    {
    case 1:
        /* code */
        cout << "Вы любите рыбу мои поздравления!";
        break;
    case 2:
        /* code */
        cout << "Вы не любите рыбу!";
        break;
    default:
        cout << "Нет такого варианта!";
        break;
    }
    return 0;
}