#include "../std_lib_facilities.h"

int main()
{
     cout << "Пожалуста, введите значение с плаваищей точкой: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\n n+1 == " << n + 1
         << "\n три раза по n == " << 3 * n
         << "\n два раза по n == " << n + n
         << "\n n в квадрате == " << n * n
         << "\n половинка n == " << n / 2
         << "\n корень квадратный из n == " << sqrt(n) << '\n';
    return 0;
}