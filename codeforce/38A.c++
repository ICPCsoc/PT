#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;  cin >> n;
    vector<int> a(n);
    for (int i = 1; i <= n - 1; i++) {
        cin >> a[i];
    }
    int b, c; cin >> b >> c;
    int sum = 0;
    for (int i = b ; i < c; i++) {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}   