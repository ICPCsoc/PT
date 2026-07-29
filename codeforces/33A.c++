#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m; long long k; cin >> n >> m >> k;
    vector<long long> row(m + 1, LLONG_MAX);
    for (int i = 0;  i < n; i++) {
        long long c; int r; cin >> r >> c;
        row[r] = min(row[r], c);
    }
    long long sum = 0;
    for (int i = 1; i <= m; i++) {
        sum += row[i];
    }
    cout << min(sum, k) << endl;
    return 0;
}