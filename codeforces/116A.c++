#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int c = 0, d = 0;
    int max = 0;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        c -= a;
        c += b;
        if (c > max) {
            max = c;
        }
    }
    cout << max << endl;
    return 0;
}