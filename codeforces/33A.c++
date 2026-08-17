/*
Codeforces 33A - What Is for Dinner?
Source: https://codeforces.com/problemset/problem/33/A

Problem statement (paraphrased):
A shark has n teeth divided among m rows. Each tooth has a remaining
viability value. Eating one fish with a chosen row decreases every tooth in
that row by one, and no viability may become negative. Given a dinner portion
of k fish, print the maximum number she can eat.
*/

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
