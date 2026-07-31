#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        int c = abs(a - b);
        int sum = (c + 9) / 10;
        cout << sum << endl;
    }
    return 0;
}