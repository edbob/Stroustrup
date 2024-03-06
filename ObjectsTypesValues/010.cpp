#include "../std_lib_facilities.h"

int main()
{
    cout << "Введите два числа: ";
    int val1 = 0;
    int val2 = 0;
    double rem=0.1;//Остаток
    double div=0.1;//Деление
    cin >> val1 >> val2;
    rem = val1 % val2;//остаток от деления
    div = val1 / val2;//просто деления
    if (val1 < val2)
        cout << val1 << " Меньше: " << val2 << '\n';
    if (val2 < val1)
        cout << val1 << " Больше: " << val2 << '\n';
    if (val1 % val2 != 0)
        cout << "Деление: " << div <<  ", есть остаток от деления: "<< rem;
    else cout << "Остатка нет!";

    return 0;
}