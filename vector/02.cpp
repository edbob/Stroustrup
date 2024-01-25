#include "../std_lib_facilities.h"

int main() {
    vector<int> v = {5,12,3,14,11,2,34,20};
    sort(v);
    for(int i=0; i <= v.size(); ++i) {
        cout << "\t" <<  v[i];
    }
    return 0;
}