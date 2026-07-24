#include "bits/stdc++.h"

using namespace std;

set<long long> d;

void tg () {
    vector<int> a(500);
    int sum = 0;
    for (int i = 0; i < 500; i++) {
        sum += i;
        a[i] = sum;
    }
    for (int i = 0; i < 500; i++) {
        d.insert(a[i]);
    }
}

int main (void) {
    tg();
    int n; cin >> n;
    if (d.count(n) == 1) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}