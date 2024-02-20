// C++ program to convert a decimal
// number to binary number

#include "../std_lib_facilities.h"

string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1) // 1
            str += '1';
        else // 0
            str += '0';
        num >>= 1; // Right Shift by 1
    }
    return str;
}

void reverse(string str)
{
    for (int i = str.size() - 1; i >= 0; i--)
        cout << str[i];
}

int main()
{
    int num = 0;
    cout << "Enter num: ";
    while (cin >> num)
    {
        
        cout << "Binary of num: " << num << " is: ";
        reverse(DecimalToBinary(num));
    }
    return 0;
}
