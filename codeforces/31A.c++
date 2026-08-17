/*
Codeforces 31A - Worms Evolution
Source: https://codeforces.com/problemset/problem/31/A

Problem statement (paraphrased):
Given n worm lengths, find three distinct indices i, j, and k such that
a[i] = a[j] + a[k]. Equal values at different indices are allowed. Print any
valid triple, or -1 if no triple exists.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (i != j && j != k && i != k) {
                    if (a[i] == a[j] + a[k]) {
                        cout << i << " " << j << " " << k << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << "\n";
    return 0;
}
