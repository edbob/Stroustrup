#include "../std_lib_facilities.h"

int main() {
    int tempX = 0;
    int tempY = 0;
    while(cin >> tempX >> tempY){
        cout << "Приплюсуйте да числа: ";
        int res = tempX+tempY; 
        cout << "Результат: "<< res << '\n';
    }
    return 0;
}