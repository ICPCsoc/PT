/*
Codeforces 32A - Reconnaissance
Source: https://codeforces.com/problemset/problem/32/A

Problem statement (paraphrased):
Given the heights of n soldiers and a maximum difference d, count ordered
pairs of distinct soldiers whose absolute height difference is at most d.
Pairs (i, j) and (j, i) are counted separately.
*/

#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if (abs(a[i] - a[j]) <= d) {
                    sum++;
                }
            }
        }
    }
    cout << sum << "\n";
    return 0;
}
