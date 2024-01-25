#include "../std_lib_facilities.h"

int main() {
    vector<string> words;
    for(string temp; cin >> temp;){
        words.push_back(temp);
    }
    string disliked = "Brocoli";
    for(int i; i<words.size();++i){
        if(i==0 || words[i - 1] != words[i]){
            if(words[i] == disliked){
                words[i] = "BLEEP.";
            }
        }
        cout << '\n' << words[i] << '\n';
    }
    cout << "Всего слов: " << words.size();
    return 0;
}