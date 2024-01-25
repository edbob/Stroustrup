#include "../std_lib_facilities.h"

int main() {
    vector<int> v = {12,23,45,34,56,12};

    for (int a : v) {
        cout << "\t " << a;
    }

    return 0;
}