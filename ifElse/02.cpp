#include "../std_lib_facilities.h"

int main()
{
    cout << "Please, input two names\n";
    string first, second;
    cin >> first >> second;
    if (first == second) cout << "Names in identical!\n";
    if (first < second)
        cout << first << " preceded " << second
            << "In alphabet order" << '\n';
    if (first > second)
        cout << first << " Follows " << second
            << "In alphabet order" << '\n';
    return 0;
}