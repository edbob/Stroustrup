#include "../std_lib_facilities.h"

int main()
{
    vector<string> words;

    for (string temp; cin >> temp;)
    {
        string dislike = "Broccoli";
        if (temp == dislike)
        {
            words.push_back("BLEEP!");
        }
        else
        {
            words.push_back(temp);
        }
        cout << "Количество слов: " << words.size() << '\n';

        sort(words);
        for (int i = 0; i < words.size(); ++i)
        {
            if (i == 0 || words[i - 1] != words[i])
            {
                cout << "- " << words[i] << '\n';
            }
        }
    }
    return 0;
}