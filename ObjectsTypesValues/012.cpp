#include "../std_lib_facilities.h"

// Напишите программу. предлагающую пользователю ввести три целых
// числа, а затем выводит их в порядке возрастания, разделяя запятыми
// . Например, если пользователь вводит числа 10 4 6. то программа
// должна вывести на экран числа 4, 6, 10. Если два числа совпадают. то
// они должны идти одно за другим. Например. если пользователь вводит
// числа 4 5 4, то программа должна вывести на экран 4, 4, 5.

int main()
{
    int a, b, c;
    cout << "введите три целых числа:\n";
    while (cin >> a >> b >> c)
        if (a <= b)
            if (b <= c)
                cout << a << "," << b << "," << c << '\n';
            else if (a <= c)
                cout << a << "," << c << "," << b << '\n';
            else
                cout << c << "," << a << "," << b << '\n';
        else if (a <= c)
            cout << b << "," << a << "," << c << '\n';
        else if (b <= c)
            cout << b << "," << c << "," << a << '\n';
        else
            cout << c << "," << b << "," << a << '\n';
    return 0;
}