#include "../std_lib_facilities.h"

int main()
{
    int tempX = 0;
    int tempY = 0;
    cout << "Приплюсуйте два числа: ";
    while (cin >> tempX >> tempY)
    {
        if (tempX < tempY)
            cout << "Наименьшее значение равно: "
                 << tempX << " Наибольшее занчение равно: "
                 << tempY;
        else if(tempX > tempY)
            cout << "Наибольшее занчение равно: "
                 << tempX << " Наибольшее занчение равно: "
                 << tempY;
        else cout << "Числа равны, ";

        int res = tempX + tempY;
        cout << " Результат: " << res << '\n';
    }
    return 0;
}