#include "../std_lib_facilities.h"

int main()
{
    double cm = 100;
    double lin = 2.54;
    double lft = 12;
    double tape = 0;
    string unit = "";
    cout << "Input Number and vslue m, in, ft,\n";
    while (cin >> tape >> unit)
    {
        if(unit == "m")
            cout << tape << "m=\t" << tape*cm << "cm\n";
        if(unit == "in")
            cout << tape << "in=\t" << tape*lin << "cm\n";
        if(unit == "ft")
            cout << tape << "ft=\t" << tape *lin*12 << "in\n";
        else if(unit == "yard" || "mete" || "km" || "gallons" || " ")
            cout << "Inadmissible Value: " << unit <<'\n';
    }
    return 0;
}