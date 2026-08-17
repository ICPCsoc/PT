/*
Codeforces 29A - Spit Problem
Source: https://codeforces.com/problemset/problem/29/A

Problem statement (paraphrased):
Camel i stands at coordinate xi and spits to coordinate xi + di. Determine
whether there are two camels that spit exactly at each other's positions.
Print YES if such a pair exists, otherwise NO.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    int n;
    cin >> n;
    vector<int> x(n), d(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> d[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i]) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
