#include "../std_lib_facilities.h"

int main()
{
    int age = 0;
    cout << "Сколько вам Лет!";
    while (cin >> age)
    {
        if (age < 0 || age > 110)
        {
            simple_error("Да иди нахер столько не живут!");
        }
        if (age == 12)
        {
            cout << "В следующем году тебе исполнится " << age + 1<< '\n';
        }
        if (age == 17)
        {
            cout << "В следующем году сможешь голосовать\n";
        }
        if (age >= 70)
        {
            cout << "Надеюсь ты не скучаешь на пенсии\n";
        }
    }

    return 0;
}