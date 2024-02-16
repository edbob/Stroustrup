#include "../std_lib_facilities.h"

int main()
{
    double sum = 0;
    double Hryvnia = 37.28;
    double ruble = 70.65;
    double yuani = 6.77;
    char unit = ' ';

    cout << "Перевод в долар США!: \n"
         << "гривна h\n"
         << "рублей: r\n"
         << "юаней: y\n";

    cin >> sum >> unit;
    switch (unit)
    {
    case 'h':
        cout << sum << "Грн " << sum * Hryvnia << " Долларов";
        break;
    case 'r':
        cout << sum << "Руб. " << sum * ruble << " Долларов";
        break;
    case 'y':
        cout << sum << "Юан." << sum * yuani << " Долларов";
    default:
        cout << "Такой валюты в базе нет: " << unit;
        break;
    }
    return 0;
}