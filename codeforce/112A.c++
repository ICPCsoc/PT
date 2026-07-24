#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z') {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1 << endl;
    } else if (a > b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}