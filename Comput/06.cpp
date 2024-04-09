#include "../std_lib_facilities.h"

int main()
{
    vector<double> tamps;
    double too_large = 1000000;

    double tamp=0;
    double sum=0;
    double min = too_large;
    double max =0;
    cout << "Введите любые цыфпы даже с остатком: \n";
    while(cin >> tamp)
    {
        tamps.push_back(tamp);

            sum += tamp;
            if(tamp <min) min =tamp;
            if(max <tamp) max = tamp;
            cout << " Общее количество: "<< sum << '\n';
            cout << " Самое маленькое значение: "<< min<<'\n';
            cout << " Максимальное значение: "<< max <<'\n';
             cout << " все значения в векторе: ";
            for(double x : tamps)
            {
                cout << x << ", ";
            }
    }
    return 0;
}