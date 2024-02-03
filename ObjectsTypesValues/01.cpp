#include "../std_lib_facilities.h"

int main(){
    cout << "Heloo, World! \n";
    cout << "Here we go! \n";
    string first_name;
    cout << "Pleas enter first name: ";
    cin >> first_name;
    cout << "Hello: " << first_name << "!\n";
    keep_window_open();//Ожидает ввода символа

    return 0;
}