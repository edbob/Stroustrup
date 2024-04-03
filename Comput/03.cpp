#include "../std_lib_facilities.h"

int main()
{
    vector<double> temps;

    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
        if (temp == 0)
        {
            for (double x : temps)
            {
                cout << "ввекторе находятся елементы: " << x << '\n';
            }
        }
    }
    return 0;
}