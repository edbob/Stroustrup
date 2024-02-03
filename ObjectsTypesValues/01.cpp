#include "../std_lib_facilities.h"

//39 int : целое число
//3.5 doubl : число с пла вающей точкой
//'.' char : отдельный символ в одинарных ка вычках
//"Annemarie" string : последова тельность символов, ограниченная двойными кавычками!
//true bool : либо истина , либо ложь

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