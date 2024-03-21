#include "../std_lib_facilities.h"

// Выполните упр. 6 для трех строковых значений. Так, если пользователь
// вводит значения Steinbeck, Hemingway, Fitzgerald, то вывод
// программы должен имеет вид Fitzgerald, Hemingway. Steinbeck.

int main()
{
    string a, b, c;
    cout << "Enter random worlds: ";
    cin >> a >> b >> c;
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    cout << a << ' ' << b << ' ' << c;
    return 0;
}