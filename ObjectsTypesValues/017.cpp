#include "../std_lib_facilities.h"

// 1 0 . Напишите программу, принимающую на входе символ операции с
// двумя операндами и выводящую на экран результат вычисления. Например:
// + 100 3 . 14
// * 4 5
// Считайте символ операции в строку с именем operation и, используя
// инструкцию if, выясните, какую операцию хочет выполнить пользователь,
// например if (operation= " + " ) . Считывайте операнды в переменные
// типа douЫe. Выполните операции + , -, *· /, plus, minus. mul и
// div, имеющие очевидный смысл.

int main()
{
    int a, b;
    char c;
    cout << "Выполните операции + , -, *· с двумя числами!"<< '\n';
    while(cin >> a >> c >> b)
    {
        if(c=='+') cout <<"ответ: "<< a+b <<'\n';
        else if(c=='-') cout <<"ответ: "<< a-b <<'\n';
        else if(c=='*') cout <<"ответ: "<< a*b <<'\n';
        else if(c=='/') cout <<"ответ: "<< a/b <<'\n';
        else cout << "error!";
    }

    return 0;
}