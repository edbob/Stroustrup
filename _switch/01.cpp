#include "../std_lib_facilities.h"

int main() {
    constexpr double cm_per_inch = 2.54;
    double length =1;
    char unit = 'a';
    cout << "Введите длину"
         << " и единицу измерения (c или i ): \n";
    cin >> length >> unit;
    switch (unit)
    {
    case 'i':
        cout << length << "in == "
             << cm_per_inch*length << " cm \n";
        break;
    case 'c':
        cout << length << "cm == "
             << length/ cm_per_inch <<" in \n";
    default:
        cout << "Извините, я не знаю что тое '"
             << unit << "'\n";
        break;
    }
}