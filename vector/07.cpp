#include "../std_lib_facilities.h"

int main()
{
    vector<string> arr;
    cout << "Введите любое слово: ";
    for (string temp; cin >> temp;)
    {
        for (string x : arr)
            if (temp == x)
            {
                cout << "\nЕсть похожее слово: " << temp << '\n';
            }
        arr.push_back(temp);
    }

    return 0;
}
