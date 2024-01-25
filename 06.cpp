#include<iostream>
using namespace std;

int main()
{
    int nunber_of_words = 0;
     string privious = " ";
     string current;

     while (cin >> current)
     {
        ++nunber_of_words;
        if(privious == current)
            cout << "Повторяищаяся слово: " << current
                 << " после " << nunber_of_words
                 << " слово." << '\n';
        privious = current;
     }
}