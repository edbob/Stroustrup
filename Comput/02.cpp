#include "../std_lib_facilities.h"

void wrute_sorry()
{
    cout << "SORRY";
}

int scure(int x)
{
    return x * x;
}
int main()
{
    int a;
    cout << "Введите число, а Я возведу его в квадрат!\n";
    while (cin >> a)
    {
        /* code */
        if (a == 0)
        {
            wrute_sorry();
        }
        else
        {
            cout << a << " = " << scure(a) << "\n";
        }
    }

    return 0;
}