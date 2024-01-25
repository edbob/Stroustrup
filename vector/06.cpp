#include "../std_lib_facilities.h"

int main(){
    double min = 0;
    double max = 0;
    vector<double> v;
    cout << "Input sum: \n";
    for (double a; cin >> a;)
    {
        v.push_back(a);
        sort(v);
        for (int i = 0; i < v.size(); ++i)
        {
            if (i == 0 || v[i - 1] < min) min = v[i];  
            else if (v[i] > max) max = v[i];
        }
        double sum =0;
        for(int x : v) sum +=x;

        cout << "Input value:\t" << a << '\n';
        cout << "Min Val:\t" << min << '\n';
        cout << "Max Val:\t" << max << '\n';
        cout << "Size Val:\t" << v.size() << '\n';
        cout << "Summ Val:\t" << sum << '\n';
        cout << "All Val:\t";
        for(int b =0; b < v.size(); ++b) cout <<"[" << v[b] << "]";
        cout << '\n' << "============================" << '\n';
    }
    return 0;
}