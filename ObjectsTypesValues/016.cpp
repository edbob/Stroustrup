#include "../std_lib_facilities.h"
// Напишите программу, преобразующую слова "нуль", "два" и так далее
// в цифры О. 2 и т.д. Когда пользователь вводит число в виде слова, программа
// должна вывести на экран соответствующую цифру. Выполните
// эту программу для цифр О, 1 , 2, 3 и 4. Если пользователь введет
// что-нибудь другое, например фразу "rлупый компьютер!", программа
// должна ответить "Я не знаю такоrо числа!"

int main()
{
    cout << "Please enter an integer as a text string: ";
    string s;
    while (cin >> s)
    {
        if (s == "zero")
            cout << s << " has the value 0\n";
        else if (s == "one")
            cout << s << " has the value 1\n";
        else if (s == "two")
            cout << s << " has the value 2\n";
        else if (s == "three")
            cout << s << " has the value 3\n";
        else if (s == "four")
            cout << s << " has the value 4\n";
        else
            cout << s << " does not have a numeric value I understand\n";
        cout << "Please enter another integer as a text string: ";
    }
    return 0;
}