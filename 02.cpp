#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your name and age.\n";
    string name = "????";
    double age = -1;

    cin >> name >> age;

    cout << "Hello, " << name << " (Age: " << age << " :" << age * 12 << " Months Old)\n";

    return 0;
}