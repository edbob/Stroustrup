#include "../std_lib_facilities.h"

int main()
{
    double nearlyA = 1 / 100;
    double tempX = 0;
    double tempY = 0;
    cout << "Приплюсуйте два числа: ";
    while (cin >> tempX >> tempY)
    {
        if (tempX - tempY <= nearlyA && tempX != tempY)
            cout << "<Почти равны>";
        else if (tempX < tempY)
            cout << "Наименьшее значение равно: "
                 << tempX << " Наибольшее занчение равно: "
                 << tempY;
        else if(tempX > tempY)
            cout << "Наибольшее занчение равно: "
                 << tempX << " Наибольшее занчение равно: "
                 << tempY;
            
        else cout << "Числа равны, ";

        double res = tempX + tempY;
        cout << " Результат: " << res << '\n';
    }

    return 0;
}