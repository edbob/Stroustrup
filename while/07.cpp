#include "../std_lib_facilities.h"

int main()
{
    cout << "Пожалуста, введите слово\n";
    vector<string> vs;
    string word;
    while (cin >> word)
    {
        vs.push_back(word);
        for (int i = 0; i < vs.size(); ++i)
        {
            if (vs[i] == vs[i])
                cout << "Походие слова " << vs[i] << '\n';
        }
    }

    return 0;
}