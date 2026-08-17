/*
Codeforces 47A - Triangular Numbers
Source: https://codeforces.com/problemset/problem/47/A

Problem statement (paraphrased):
Given an integer n from 1 to 500, determine whether n is a triangular number,
meaning n = k * (k + 1) / 2 for some positive integer k. Print YES or NO.
*/

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
