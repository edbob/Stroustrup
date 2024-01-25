#include "std_lib_facilities.h"

int main()
{
    cout << "Пожалуста, введите два имени\n";
    string first;
    string second;
    cin >> first >> second;
    if(first == second) cout << "иммена совпадают\n";
    if(first < second)
        cout << first << " предшествует " << second
             << "в алфовитном порядке" << '\n';
    if(first > second)
        cout << first << " следует за " << second
             << "в алфавитном порядке" << '\n'; 
    return 0;  
}