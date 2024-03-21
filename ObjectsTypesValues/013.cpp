#include "../std_lib_facilities.h"

void fillUp(int arr[], const int a)
{
    for(int i=0; i <= a; i++)
        arr[i] = rand() % 10;
}

void countDigit(int arr[],const int a)
{
    int i=0; 
    while(i <= a){
        cout << "Рандомный массив: " << arr[i] << endl;
        ++i;
    }
    cout << "Количество элементов в массиве: " << i << endl;
}

int main()
{
    //length in c++
    const int size=10;
    int arr[size];

    fillUp(arr, size);
    countDigit(arr, size);
    //GnomeSort(arr, size);
    return 0;
}